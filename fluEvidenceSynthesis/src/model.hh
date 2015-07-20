#ifndef MODEL_HH
#define MODEL_HH


#include<iostream>
#include<cmath>

#include<vector>

#include <boost/date_time.hpp>

#include "state.hh"
#include "vaccine.hh"

#include "rcppwrap.hh"
#include<RcppEigen.h>

namespace flu
{
    boost::posix_time::ptime getTimeFromWeekYear( int week, int year );

    struct cases_t 
    {
        //! Number of new cases
        Eigen::MatrixXd cases;

        //! Times corresponding to number of cases
        std::vector<boost::posix_time::ptime> times;
    };

    cases_t one_year_SEIR_with_vaccination(
            const std::vector<double> &pop_vec, 
            double *, const double, const double,  
            const std::vector<double> &, 
            const Eigen::MatrixXd &contact_regular, double, 
            const vaccine::vaccine_t &vaccine_programme );

    void days_to_weeks(double *, double *);
    void days_to_weeks_no_class(double *, double *);

    Eigen::MatrixXd days_to_weeks_5AG(const cases_t &simulation);

    double log_likelihood_hyper_poisson(const std::vector<double> &eps, 
            double psi, const Eigen::MatrixXd &result_by_week,
            const Eigen::MatrixXi &ili, const Eigen::MatrixXi &mon_pop, 
            const Eigen::MatrixXi &n_pos, const Eigen::MatrixXi &n_samples, 
            double * pop_5AG_RCGP, int depth);

    /**
     * \brief Return the log prior probability of the proposed parameters - current parameters
     *
     * \param susceptibility whether to use the prior based on 2003/04
     */
    double log_prior( const parameter_set &proposed,
            const parameter_set &current,
            bool susceptibility = false );

};

#endif
