#ifndef STATE_HH 
#define STATE_HH 
#include<string>
#include<vector>

#include<Eigen/Core>

#define NAG 7
#define NAG2 49
#define no_days 364
#define length_weeks 52
#define twopi 6.283185
#define POLY_PART 597
#define dim_par 9
#define dim_par2 81
//#define seed 578

namespace flu
{
    /// Parameters of the model
    // TODO: Add as vector option?
    struct parameter_set {
        std::vector<double> epsilon = std::vector<double>(5);
        double psi;
        double transmissibility;
        Eigen::VectorXd susceptibility = Eigen::VectorXd(7);
        double init_pop;
    };

    /// Keeps the current state of the model/mcmc
    struct state_t 
    {
        parameter_set parameters;
        double time_infectious, time_latent;

        std::vector<size_t> contact_ids;
        double likelihood;
    };
}

#endif
