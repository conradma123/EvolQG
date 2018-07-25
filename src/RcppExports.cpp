// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// RS
arma::mat RS(arma::mat x, arma::mat y, int num_vectors);
RcppExport SEXP _evolqg_RS(SEXP xSEXP, SEXP ySEXP, SEXP num_vectorsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type num_vectors(num_vectorsSEXP);
    rcpp_result_gen = Rcpp::wrap(RS(x, y, num_vectors));
    return rcpp_result_gen;
END_RCPP
}
// delta_z_corr
arma::vec delta_z_corr(arma::mat x, arma::mat y, int num_vectors, arma::mat random_vectors);
RcppExport SEXP _evolqg_delta_z_corr(SEXP xSEXP, SEXP ySEXP, SEXP num_vectorsSEXP, SEXP random_vectorsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type num_vectors(num_vectorsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type random_vectors(random_vectorsSEXP);
    rcpp_result_gen = Rcpp::wrap(delta_z_corr(x, y, num_vectors, random_vectors));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_evolqg_RS", (DL_FUNC) &_evolqg_RS, 3},
    {"_evolqg_delta_z_corr", (DL_FUNC) &_evolqg_delta_z_corr, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_evolqg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
