// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "fluEvidenceSynthesis_types.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// inference
std::vector<state_t> inference(std::vector<size_t> age_sizes, Eigen::MatrixXi ili, Eigen::MatrixXi mon_pop, Eigen::MatrixXi n_pos, Eigen::MatrixXi n_samples, flu::vaccine::vaccine_t vaccine_calendar, flu::contacts::contacts_t polymod_data, flu::state_t init_sample, int mcmc_chain_length, int burn_in, int thinning);
RcppExport SEXP fluEvidenceSynthesis_inference(SEXP age_sizesSEXP, SEXP iliSEXP, SEXP mon_popSEXP, SEXP n_posSEXP, SEXP n_samplesSEXP, SEXP vaccine_calendarSEXP, SEXP polymod_dataSEXP, SEXP init_sampleSEXP, SEXP mcmc_chain_lengthSEXP, SEXP burn_inSEXP, SEXP thinningSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<size_t> >::type age_sizes(age_sizesSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type ili(iliSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type mon_pop(mon_popSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type n_pos(n_posSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< flu::vaccine::vaccine_t >::type vaccine_calendar(vaccine_calendarSEXP);
    Rcpp::traits::input_parameter< flu::contacts::contacts_t >::type polymod_data(polymod_dataSEXP);
    Rcpp::traits::input_parameter< flu::state_t >::type init_sample(init_sampleSEXP);
    Rcpp::traits::input_parameter< int >::type mcmc_chain_length(mcmc_chain_lengthSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< int >::type thinning(thinningSEXP);
    __result = Rcpp::wrap(inference(age_sizes, ili, mon_pop, n_pos, n_samples, vaccine_calendar, polymod_data, init_sample, mcmc_chain_length, burn_in, thinning));
    return __result;
END_RCPP
}
// updateMeans
Eigen::VectorXd updateMeans(Eigen::VectorXd means, Eigen::VectorXd v, size_t n);
RcppExport SEXP fluEvidenceSynthesis_updateMeans(SEXP meansSEXP, SEXP vSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type means(meansSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type v(vSEXP);
    Rcpp::traits::input_parameter< size_t >::type n(nSEXP);
    __result = Rcpp::wrap(updateMeans(means, v, n));
    return __result;
END_RCPP
}
// updateCovariance
Eigen::MatrixXd updateCovariance(Eigen::MatrixXd cov, Eigen::VectorXd v, Eigen::VectorXd means, size_t n);
RcppExport SEXP fluEvidenceSynthesis_updateCovariance(SEXP covSEXP, SEXP vSEXP, SEXP meansSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type cov(covSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type v(vSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type means(meansSEXP);
    Rcpp::traits::input_parameter< size_t >::type n(nSEXP);
    __result = Rcpp::wrap(updateCovariance(cov, v, means, n));
    return __result;
END_RCPP
}
// getTimeFromWeekYear
Rcpp::Datetime getTimeFromWeekYear(int week, int year);
RcppExport SEXP fluEvidenceSynthesis_getTimeFromWeekYear(SEXP weekSEXP, SEXP yearSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type week(weekSEXP);
    Rcpp::traits::input_parameter< int >::type year(yearSEXP);
    __result = Rcpp::wrap(getTimeFromWeekYear(week, year));
    return __result;
END_RCPP
}
// runSEIRModel
Rcpp::DataFrame runSEIRModel(std::vector<size_t> age_sizes, flu::vaccine::vaccine_t vaccine_calendar, flu::contacts::contacts_t polymod_data, Eigen::VectorXd susceptibility, double transmissibility, double init_pop, Eigen::VectorXd infection_delays, size_t interval);
RcppExport SEXP fluEvidenceSynthesis_runSEIRModel(SEXP age_sizesSEXP, SEXP vaccine_calendarSEXP, SEXP polymod_dataSEXP, SEXP susceptibilitySEXP, SEXP transmissibilitySEXP, SEXP init_popSEXP, SEXP infection_delaysSEXP, SEXP intervalSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<size_t> >::type age_sizes(age_sizesSEXP);
    Rcpp::traits::input_parameter< flu::vaccine::vaccine_t >::type vaccine_calendar(vaccine_calendarSEXP);
    Rcpp::traits::input_parameter< flu::contacts::contacts_t >::type polymod_data(polymod_dataSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type susceptibility(susceptibilitySEXP);
    Rcpp::traits::input_parameter< double >::type transmissibility(transmissibilitySEXP);
    Rcpp::traits::input_parameter< double >::type init_pop(init_popSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type infection_delays(infection_delaysSEXP);
    Rcpp::traits::input_parameter< size_t >::type interval(intervalSEXP);
    __result = Rcpp::wrap(runSEIRModel(age_sizes, vaccine_calendar, polymod_data, susceptibility, transmissibility, init_pop, infection_delays, interval));
    return __result;
END_RCPP
}
// log_likelihood
double log_likelihood(double epsilon, double psi, size_t predicted, double population_size, int ili_cases, int ili_monitored, int confirmed_positive, int confirmed_samples);
RcppExport SEXP fluEvidenceSynthesis_log_likelihood(SEXP epsilonSEXP, SEXP psiSEXP, SEXP predictedSEXP, SEXP population_sizeSEXP, SEXP ili_casesSEXP, SEXP ili_monitoredSEXP, SEXP confirmed_positiveSEXP, SEXP confirmed_samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< size_t >::type predicted(predictedSEXP);
    Rcpp::traits::input_parameter< double >::type population_size(population_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type ili_cases(ili_casesSEXP);
    Rcpp::traits::input_parameter< int >::type ili_monitored(ili_monitoredSEXP);
    Rcpp::traits::input_parameter< int >::type confirmed_positive(confirmed_positiveSEXP);
    Rcpp::traits::input_parameter< int >::type confirmed_samples(confirmed_samplesSEXP);
    __result = Rcpp::wrap(log_likelihood(epsilon, psi, predicted, population_size, ili_cases, ili_monitored, confirmed_positive, confirmed_samples));
    return __result;
END_RCPP
}
// runPredatorPrey
Eigen::MatrixXd runPredatorPrey(double step_size, double h_step);
RcppExport SEXP fluEvidenceSynthesis_runPredatorPrey(SEXP step_sizeSEXP, SEXP h_stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type step_size(step_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type h_step(h_stepSEXP);
    __result = Rcpp::wrap(runPredatorPrey(step_size, h_step));
    return __result;
END_RCPP
}
// runPredatorPreySimple
Eigen::MatrixXd runPredatorPreySimple(double step_size, double h_step);
RcppExport SEXP fluEvidenceSynthesis_runPredatorPreySimple(SEXP step_sizeSEXP, SEXP h_stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type step_size(step_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type h_step(h_stepSEXP);
    __result = Rcpp::wrap(runPredatorPreySimple(step_size, h_step));
    return __result;
END_RCPP
}
// adaptiveMCMCR
Rcpp::List adaptiveMCMCR(Rcpp::Function lprior, Rcpp::Function llikelihood, size_t nburn, Eigen::VectorXd initial, size_t nbatch, size_t blen);
RcppExport SEXP fluEvidenceSynthesis_adaptiveMCMCR(SEXP lpriorSEXP, SEXP llikelihoodSEXP, SEXP nburnSEXP, SEXP initialSEXP, SEXP nbatchSEXP, SEXP blenSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::Function >::type lprior(lpriorSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type llikelihood(llikelihoodSEXP);
    Rcpp::traits::input_parameter< size_t >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type initial(initialSEXP);
    Rcpp::traits::input_parameter< size_t >::type nbatch(nbatchSEXP);
    Rcpp::traits::input_parameter< size_t >::type blen(blenSEXP);
    __result = Rcpp::wrap(adaptiveMCMCR(lprior, llikelihood, nburn, initial, nbatch, blen));
    return __result;
END_RCPP
}
// binomial_inference
Rcpp::List binomial_inference(std::vector<size_t> age_sizes, Eigen::MatrixXi ili, Eigen::MatrixXi mon_pop, Eigen::MatrixXi n_pos, Eigen::MatrixXi n_samples, flu::vaccine::vaccine_t vaccine_calendar, flu::contacts::contacts_t polymod_data, Eigen::VectorXd initial, int nburn, int nbatch, int blen);
RcppExport SEXP fluEvidenceSynthesis_binomial_inference(SEXP age_sizesSEXP, SEXP iliSEXP, SEXP mon_popSEXP, SEXP n_posSEXP, SEXP n_samplesSEXP, SEXP vaccine_calendarSEXP, SEXP polymod_dataSEXP, SEXP initialSEXP, SEXP nburnSEXP, SEXP nbatchSEXP, SEXP blenSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<size_t> >::type age_sizes(age_sizesSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type ili(iliSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type mon_pop(mon_popSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type n_pos(n_posSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< flu::vaccine::vaccine_t >::type vaccine_calendar(vaccine_calendarSEXP);
    Rcpp::traits::input_parameter< flu::contacts::contacts_t >::type polymod_data(polymod_dataSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type initial(initialSEXP);
    Rcpp::traits::input_parameter< int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< int >::type nbatch(nbatchSEXP);
    Rcpp::traits::input_parameter< int >::type blen(blenSEXP);
    __result = Rcpp::wrap(binomial_inference(age_sizes, ili, mon_pop, n_pos, n_samples, vaccine_calendar, polymod_data, initial, nburn, nbatch, blen));
    return __result;
END_RCPP
}
// vaccinationScenario
std::vector<double> vaccinationScenario(std::vector<size_t> age_sizes, flu::vaccine::vaccine_t vaccine_calendar, flu::contacts::contacts_t polymod_data, flu::state_t sample);
RcppExport SEXP fluEvidenceSynthesis_vaccinationScenario(SEXP age_sizesSEXP, SEXP vaccine_calendarSEXP, SEXP polymod_dataSEXP, SEXP sampleSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<size_t> >::type age_sizes(age_sizesSEXP);
    Rcpp::traits::input_parameter< flu::vaccine::vaccine_t >::type vaccine_calendar(vaccine_calendarSEXP);
    Rcpp::traits::input_parameter< flu::contacts::contacts_t >::type polymod_data(polymod_dataSEXP);
    Rcpp::traits::input_parameter< flu::state_t >::type sample(sampleSEXP);
    __result = Rcpp::wrap(vaccinationScenario(age_sizes, vaccine_calendar, polymod_data, sample));
    return __result;
END_RCPP
}
