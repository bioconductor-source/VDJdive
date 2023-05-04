// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// TCR_EM_counts2
Rcpp::NumericVector TCR_EM_counts2(Rcpp::NumericVector unique_counts, Rcpp::NumericVector counts_old, Rcpp::List t_indices, double thresh, int max_iters);
RcppExport SEXP _VDJdive_TCR_EM_counts2(SEXP unique_countsSEXP, SEXP counts_oldSEXP, SEXP t_indicesSEXP, SEXP threshSEXP, SEXP max_itersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type unique_counts(unique_countsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type counts_old(counts_oldSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type t_indices(t_indicesSEXP);
    Rcpp::traits::input_parameter< double >::type thresh(threshSEXP);
    Rcpp::traits::input_parameter< int >::type max_iters(max_itersSEXP);
    rcpp_result_gen = Rcpp::wrap(TCR_EM_counts2(unique_counts, counts_old, t_indices, thresh, max_iters));
    return rcpp_result_gen;
END_RCPP
}
// make_distrs2
Rcpp::List make_distrs2(Rcpp::List probs_list);
RcppExport SEXP _VDJdive_make_distrs2(SEXP probs_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type probs_list(probs_listSEXP);
    rcpp_result_gen = Rcpp::wrap(make_distrs2(probs_list));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_VDJdive_TCR_EM_counts2", (DL_FUNC) &_VDJdive_TCR_EM_counts2, 5},
    {"_VDJdive_make_distrs2", (DL_FUNC) &_VDJdive_make_distrs2, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_VDJdive(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
