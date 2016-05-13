// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// doubleSparseMatrix
arma::sp_mat doubleSparseMatrix(arma::sp_mat m);
RcppExport SEXP pirls_doubleSparseMatrix(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::sp_mat >::type m(mSEXP);
    __result = Rcpp::wrap(doubleSparseMatrix(m));
    return __result;
END_RCPP
}
// c_update_coordinates
arma::sp_mat c_update_coordinates(arma::mat X, arma::sp_mat W, arma::mat z, double lambda, double alpha, arma::sp_mat beta, bool parallel);
RcppExport SEXP pirls_c_update_coordinates(SEXP XSEXP, SEXP WSEXP, SEXP zSEXP, SEXP lambdaSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    __result = Rcpp::wrap(c_update_coordinates(X, W, z, lambda, alpha, beta, parallel));
    return __result;
END_RCPP
}
// c_quadratic_loss
double c_quadratic_loss(arma::mat X, arma::sp_mat W, arma::mat z, double lambda, double alpha, arma::sp_mat beta);
RcppExport SEXP pirls_c_quadratic_loss(SEXP XSEXP, SEXP WSEXP, SEXP zSEXP, SEXP lambdaSEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type beta(betaSEXP);
    __result = Rcpp::wrap(c_quadratic_loss(X, W, z, lambda, alpha, beta));
    return __result;
END_RCPP
}
