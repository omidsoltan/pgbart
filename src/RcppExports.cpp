// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// train
Rcpp::List train(NumericMatrix& train_data, NumericVector& train_label, bool if_test, NumericMatrix& test_data, NumericVector& test_label, String& model_file, double alpha_bart, double alpha_split, double beta_split, bool if_center_label, bool if_debug, double ess_threshold, unsigned int init_seed_id, bool if_set_seed, double k_bart, unsigned int m_bart, unsigned int min_size, unsigned int ndpost, unsigned int nskip, unsigned int keepevery, const String& variance_type, double q_bart, unsigned int verbose_level, unsigned int n_particles, const String& resample_type);
RcppExport SEXP pgbart_train(SEXP train_dataSEXP, SEXP train_labelSEXP, SEXP if_testSEXP, SEXP test_dataSEXP, SEXP test_labelSEXP, SEXP model_fileSEXP, SEXP alpha_bartSEXP, SEXP alpha_splitSEXP, SEXP beta_splitSEXP, SEXP if_center_labelSEXP, SEXP if_debugSEXP, SEXP ess_thresholdSEXP, SEXP init_seed_idSEXP, SEXP if_set_seedSEXP, SEXP k_bartSEXP, SEXP m_bartSEXP, SEXP min_sizeSEXP, SEXP ndpostSEXP, SEXP nskipSEXP, SEXP keepeverySEXP, SEXP variance_typeSEXP, SEXP q_bartSEXP, SEXP verbose_levelSEXP, SEXP n_particlesSEXP, SEXP resample_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type train_data(train_dataSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type train_label(train_labelSEXP);
    Rcpp::traits::input_parameter< bool >::type if_test(if_testSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type test_data(test_dataSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type test_label(test_labelSEXP);
    Rcpp::traits::input_parameter< String& >::type model_file(model_fileSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_bart(alpha_bartSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_split(alpha_splitSEXP);
    Rcpp::traits::input_parameter< double >::type beta_split(beta_splitSEXP);
    Rcpp::traits::input_parameter< bool >::type if_center_label(if_center_labelSEXP);
    Rcpp::traits::input_parameter< bool >::type if_debug(if_debugSEXP);
    Rcpp::traits::input_parameter< double >::type ess_threshold(ess_thresholdSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type init_seed_id(init_seed_idSEXP);
    Rcpp::traits::input_parameter< bool >::type if_set_seed(if_set_seedSEXP);
    Rcpp::traits::input_parameter< double >::type k_bart(k_bartSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type m_bart(m_bartSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type min_size(min_sizeSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ndpost(ndpostSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nskip(nskipSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type keepevery(keepeverySEXP);
    Rcpp::traits::input_parameter< const String& >::type variance_type(variance_typeSEXP);
    Rcpp::traits::input_parameter< double >::type q_bart(q_bartSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type verbose_level(verbose_levelSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_particles(n_particlesSEXP);
    Rcpp::traits::input_parameter< const String& >::type resample_type(resample_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(train(train_data, train_label, if_test, test_data, test_label, model_file, alpha_bart, alpha_split, beta_split, if_center_label, if_debug, ess_threshold, init_seed_id, if_set_seed, k_bart, m_bart, min_size, ndpost, nskip, keepevery, variance_type, q_bart, verbose_level, n_particles, resample_type));
    return rcpp_result_gen;
END_RCPP
}
// predict
NumericVector predict(NumericMatrix& test_data, String& model_file);
RcppExport SEXP pgbart_predict(SEXP test_dataSEXP, SEXP model_fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type test_data(test_dataSEXP);
    Rcpp::traits::input_parameter< String& >::type model_file(model_fileSEXP);
    rcpp_result_gen = Rcpp::wrap(predict(test_data, model_file));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"pgbart_train", (DL_FUNC) &pgbart_train, 25},
    {"pgbart_predict", (DL_FUNC) &pgbart_predict, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_pgbart(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}