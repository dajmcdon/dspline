// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_dot_divided_diff
void rcpp_dot_divided_diff(NumericVector f, NumericVector z);
RcppExport SEXP _dspline_rcpp_dot_divided_diff(SEXP fSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    rcpp_dot_divided_diff(f, z);
    return R_NilValue;
END_RCPP
}
// rcpp_divided_diff
double rcpp_divided_diff(NumericVector f, NumericVector z);
RcppExport SEXP _dspline_rcpp_divided_diff(SEXP fSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_divided_diff(f, z));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_discrete_deriv
NumericVector rcpp_discrete_deriv(NumericVector f, int k, NumericVector xd, NumericVector x);
RcppExport SEXP _dspline_rcpp_discrete_deriv(SEXP fSEXP, SEXP kSEXP, SEXP xdSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xd(xdSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_discrete_deriv(f, k, xd, x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_discrete_integ
NumericVector rcpp_discrete_integ(NumericVector f, int k, NumericVector xd, NumericVector x);
RcppExport SEXP _dspline_rcpp_discrete_integ(SEXP fSEXP, SEXP kSEXP, SEXP xdSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xd(xdSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_discrete_integ(f, k, xd, x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_newton_interp
NumericVector rcpp_newton_interp(NumericVector v, NumericVector z, NumericVector x);
RcppExport SEXP _dspline_rcpp_newton_interp(SEXP vSEXP, SEXP zSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_newton_interp(v, z, x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_dspline_interp
NumericVector rcpp_dspline_interp(NumericVector v, int k, NumericVector xd, NumericVector x, bool implicit);
RcppExport SEXP _dspline_rcpp_dspline_interp(SEXP vSEXP, SEXP kSEXP, SEXP xdSEXP, SEXP xSEXP, SEXP implicitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xd(xdSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type implicit(implicitSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_dspline_interp(v, k, xd, x, implicit));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_b_mat
Eigen::SparseMatrix<double> rcpp_b_mat(int k, NumericVector xd, bool tf_weighting, IntegerVector row_idx, bool d_only);
static SEXP _dspline_rcpp_b_mat_try(SEXP kSEXP, SEXP xdSEXP, SEXP tf_weightingSEXP, SEXP row_idxSEXP, SEXP d_onlySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xd(xdSEXP);
    Rcpp::traits::input_parameter< bool >::type tf_weighting(tf_weightingSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type row_idx(row_idxSEXP);
    Rcpp::traits::input_parameter< bool >::type d_only(d_onlySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_b_mat(k, xd, tf_weighting, row_idx, d_only));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dspline_rcpp_b_mat(SEXP kSEXP, SEXP xdSEXP, SEXP tf_weightingSEXP, SEXP row_idxSEXP, SEXP d_onlySEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_dspline_rcpp_b_mat_try(kSEXP, xdSEXP, tf_weightingSEXP, row_idxSEXP, d_onlySEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_h_mat
Eigen::SparseMatrix<double> rcpp_h_mat(int k, NumericVector xd, bool di_weighting, IntegerVector col_idx);
static SEXP _dspline_rcpp_h_mat_try(SEXP kSEXP, SEXP xdSEXP, SEXP di_weightingSEXP, SEXP col_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xd(xdSEXP);
    Rcpp::traits::input_parameter< bool >::type di_weighting(di_weightingSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type col_idx(col_idxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_h_mat(k, xd, di_weighting, col_idx));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dspline_rcpp_h_mat(SEXP kSEXP, SEXP xdSEXP, SEXP di_weightingSEXP, SEXP col_idxSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_dspline_rcpp_h_mat_try(kSEXP, xdSEXP, di_weightingSEXP, col_idxSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_n_mat
Eigen::SparseMatrix<double> rcpp_n_mat(int k, NumericVector xd, bool normalized, IntegerVector knot_idx);
static SEXP _dspline_rcpp_n_mat_try(SEXP kSEXP, SEXP xdSEXP, SEXP normalizedSEXP, SEXP knot_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xd(xdSEXP);
    Rcpp::traits::input_parameter< bool >::type normalized(normalizedSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type knot_idx(knot_idxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_n_mat(k, xd, normalized, knot_idx));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dspline_rcpp_n_mat(SEXP kSEXP, SEXP xdSEXP, SEXP normalizedSEXP, SEXP knot_idxSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_dspline_rcpp_n_mat_try(kSEXP, xdSEXP, normalizedSEXP, knot_idxSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_h_eval
Eigen::SparseMatrix<double> rcpp_h_eval(int k, NumericVector xd, NumericVector x, IntegerVector col_idx);
static SEXP _dspline_rcpp_h_eval_try(SEXP kSEXP, SEXP xdSEXP, SEXP xSEXP, SEXP col_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xd(xdSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type col_idx(col_idxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_h_eval(k, xd, x, col_idx));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dspline_rcpp_h_eval(SEXP kSEXP, SEXP xdSEXP, SEXP xSEXP, SEXP col_idxSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_dspline_rcpp_h_eval_try(kSEXP, xdSEXP, xSEXP, col_idxSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_n_eval
Eigen::SparseMatrix<double> rcpp_n_eval(int k, NumericVector xd, NumericVector x, bool normalized, IntegerVector knot_idx);
static SEXP _dspline_rcpp_n_eval_try(SEXP kSEXP, SEXP xdSEXP, SEXP xSEXP, SEXP normalizedSEXP, SEXP knot_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xd(xdSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type normalized(normalizedSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type knot_idx(knot_idxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_n_eval(k, xd, x, normalized, knot_idx));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dspline_rcpp_n_eval(SEXP kSEXP, SEXP xdSEXP, SEXP xSEXP, SEXP normalizedSEXP, SEXP knot_idxSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_dspline_rcpp_n_eval_try(kSEXP, xdSEXP, xSEXP, normalizedSEXP, knot_idxSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_n_eval_precomputed
Eigen::SparseMatrix<double> rcpp_n_eval_precomputed(int k, NumericVector xd, NumericVector x, IntegerVector knot_idx, Eigen::SparseMatrix<double> n_mat);
static SEXP _dspline_rcpp_n_eval_precomputed_try(SEXP kSEXP, SEXP xdSEXP, SEXP xSEXP, SEXP knot_idxSEXP, SEXP n_matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xd(xdSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type knot_idx(knot_idxSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type n_mat(n_matSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_n_eval_precomputed(k, xd, x, knot_idx, n_mat));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dspline_rcpp_n_eval_precomputed(SEXP kSEXP, SEXP xdSEXP, SEXP xSEXP, SEXP knot_idxSEXP, SEXP n_matSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_dspline_rcpp_n_eval_precomputed_try(kSEXP, xdSEXP, xSEXP, knot_idxSEXP, n_matSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_dot_b_mat_mult
void rcpp_dot_b_mat_mult(NumericVector v, int k, NumericVector xd, bool tf_weighting, bool transpose, bool inverse);
static SEXP _dspline_rcpp_dot_b_mat_mult_try(SEXP vSEXP, SEXP kSEXP, SEXP xdSEXP, SEXP tf_weightingSEXP, SEXP transposeSEXP, SEXP inverseSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xd(xdSEXP);
    Rcpp::traits::input_parameter< bool >::type tf_weighting(tf_weightingSEXP);
    Rcpp::traits::input_parameter< bool >::type transpose(transposeSEXP);
    Rcpp::traits::input_parameter< bool >::type inverse(inverseSEXP);
    rcpp_dot_b_mat_mult(v, k, xd, tf_weighting, transpose, inverse);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dspline_rcpp_dot_b_mat_mult(SEXP vSEXP, SEXP kSEXP, SEXP xdSEXP, SEXP tf_weightingSEXP, SEXP transposeSEXP, SEXP inverseSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_dspline_rcpp_dot_b_mat_mult_try(vSEXP, kSEXP, xdSEXP, tf_weightingSEXP, transposeSEXP, inverseSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_dot_h_mat_mult
void rcpp_dot_h_mat_mult(NumericVector v, int k, NumericVector xd, bool di_weighting, bool transpose, bool inverse);
static SEXP _dspline_rcpp_dot_h_mat_mult_try(SEXP vSEXP, SEXP kSEXP, SEXP xdSEXP, SEXP di_weightingSEXP, SEXP transposeSEXP, SEXP inverseSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xd(xdSEXP);
    Rcpp::traits::input_parameter< bool >::type di_weighting(di_weightingSEXP);
    Rcpp::traits::input_parameter< bool >::type transpose(transposeSEXP);
    Rcpp::traits::input_parameter< bool >::type inverse(inverseSEXP);
    rcpp_dot_h_mat_mult(v, k, xd, di_weighting, transpose, inverse);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dspline_rcpp_dot_h_mat_mult(SEXP vSEXP, SEXP kSEXP, SEXP xdSEXP, SEXP di_weightingSEXP, SEXP transposeSEXP, SEXP inverseSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_dspline_rcpp_dot_h_mat_mult_try(vSEXP, kSEXP, xdSEXP, di_weightingSEXP, transposeSEXP, inverseSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_d_mat_mult
NumericVector rcpp_d_mat_mult(NumericVector v, int k, NumericVector xd, bool tf_weighting, bool transpose);
static SEXP _dspline_rcpp_d_mat_mult_try(SEXP vSEXP, SEXP kSEXP, SEXP xdSEXP, SEXP tf_weightingSEXP, SEXP transposeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xd(xdSEXP);
    Rcpp::traits::input_parameter< bool >::type tf_weighting(tf_weightingSEXP);
    Rcpp::traits::input_parameter< bool >::type transpose(transposeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_d_mat_mult(v, k, xd, tf_weighting, transpose));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dspline_rcpp_d_mat_mult(SEXP vSEXP, SEXP kSEXP, SEXP xdSEXP, SEXP tf_weightingSEXP, SEXP transposeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_dspline_rcpp_d_mat_mult_try(vSEXP, kSEXP, xdSEXP, tf_weightingSEXP, transposeSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_b_mat_mult
NumericVector rcpp_b_mat_mult(NumericVector v, int k, NumericVector xd, bool tf_weighting, bool transpose, bool inverse);
static SEXP _dspline_rcpp_b_mat_mult_try(SEXP vSEXP, SEXP kSEXP, SEXP xdSEXP, SEXP tf_weightingSEXP, SEXP transposeSEXP, SEXP inverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xd(xdSEXP);
    Rcpp::traits::input_parameter< bool >::type tf_weighting(tf_weightingSEXP);
    Rcpp::traits::input_parameter< bool >::type transpose(transposeSEXP);
    Rcpp::traits::input_parameter< bool >::type inverse(inverseSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_b_mat_mult(v, k, xd, tf_weighting, transpose, inverse));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dspline_rcpp_b_mat_mult(SEXP vSEXP, SEXP kSEXP, SEXP xdSEXP, SEXP tf_weightingSEXP, SEXP transposeSEXP, SEXP inverseSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_dspline_rcpp_b_mat_mult_try(vSEXP, kSEXP, xdSEXP, tf_weightingSEXP, transposeSEXP, inverseSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcpp_h_mat_mult
NumericVector rcpp_h_mat_mult(NumericVector v, int k, NumericVector xd, bool di_weighting, bool transpose, bool inverse);
static SEXP _dspline_rcpp_h_mat_mult_try(SEXP vSEXP, SEXP kSEXP, SEXP xdSEXP, SEXP di_weightingSEXP, SEXP transposeSEXP, SEXP inverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xd(xdSEXP);
    Rcpp::traits::input_parameter< bool >::type di_weighting(di_weightingSEXP);
    Rcpp::traits::input_parameter< bool >::type transpose(transposeSEXP);
    Rcpp::traits::input_parameter< bool >::type inverse(inverseSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_h_mat_mult(v, k, xd, di_weighting, transpose, inverse));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dspline_rcpp_h_mat_mult(SEXP vSEXP, SEXP kSEXP, SEXP xdSEXP, SEXP di_weightingSEXP, SEXP transposeSEXP, SEXP inverseSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_dspline_rcpp_h_mat_mult_try(vSEXP, kSEXP, xdSEXP, di_weightingSEXP, transposeSEXP, inverseSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _dspline_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Eigen::SparseMatrix<double>(*rcpp_b_mat)(int,NumericVector,bool,IntegerVector,bool)");
        signatures.insert("Eigen::SparseMatrix<double>(*rcpp_h_mat)(int,NumericVector,bool,IntegerVector)");
        signatures.insert("Eigen::SparseMatrix<double>(*rcpp_n_mat)(int,NumericVector,bool,IntegerVector)");
        signatures.insert("Eigen::SparseMatrix<double>(*rcpp_h_eval)(int,NumericVector,NumericVector,IntegerVector)");
        signatures.insert("Eigen::SparseMatrix<double>(*rcpp_n_eval)(int,NumericVector,NumericVector,bool,IntegerVector)");
        signatures.insert("Eigen::SparseMatrix<double>(*rcpp_n_eval_precomputed)(int,NumericVector,NumericVector,IntegerVector,Eigen::SparseMatrix<double>)");
        signatures.insert("void(*rcpp_dot_b_mat_mult)(NumericVector,int,NumericVector,bool,bool,bool)");
        signatures.insert("void(*rcpp_dot_h_mat_mult)(NumericVector,int,NumericVector,bool,bool,bool)");
        signatures.insert("NumericVector(*rcpp_d_mat_mult)(NumericVector,int,NumericVector,bool,bool)");
        signatures.insert("NumericVector(*rcpp_b_mat_mult)(NumericVector,int,NumericVector,bool,bool,bool)");
        signatures.insert("NumericVector(*rcpp_h_mat_mult)(NumericVector,int,NumericVector,bool,bool,bool)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _dspline_RcppExport_registerCCallable() { 
    R_RegisterCCallable("dspline", "_dspline_rcpp_b_mat", (DL_FUNC)_dspline_rcpp_b_mat_try);
    R_RegisterCCallable("dspline", "_dspline_rcpp_h_mat", (DL_FUNC)_dspline_rcpp_h_mat_try);
    R_RegisterCCallable("dspline", "_dspline_rcpp_n_mat", (DL_FUNC)_dspline_rcpp_n_mat_try);
    R_RegisterCCallable("dspline", "_dspline_rcpp_h_eval", (DL_FUNC)_dspline_rcpp_h_eval_try);
    R_RegisterCCallable("dspline", "_dspline_rcpp_n_eval", (DL_FUNC)_dspline_rcpp_n_eval_try);
    R_RegisterCCallable("dspline", "_dspline_rcpp_n_eval_precomputed", (DL_FUNC)_dspline_rcpp_n_eval_precomputed_try);
    R_RegisterCCallable("dspline", "_dspline_rcpp_dot_b_mat_mult", (DL_FUNC)_dspline_rcpp_dot_b_mat_mult_try);
    R_RegisterCCallable("dspline", "_dspline_rcpp_dot_h_mat_mult", (DL_FUNC)_dspline_rcpp_dot_h_mat_mult_try);
    R_RegisterCCallable("dspline", "_dspline_rcpp_d_mat_mult", (DL_FUNC)_dspline_rcpp_d_mat_mult_try);
    R_RegisterCCallable("dspline", "_dspline_rcpp_b_mat_mult", (DL_FUNC)_dspline_rcpp_b_mat_mult_try);
    R_RegisterCCallable("dspline", "_dspline_rcpp_h_mat_mult", (DL_FUNC)_dspline_rcpp_h_mat_mult_try);
    R_RegisterCCallable("dspline", "_dspline_RcppExport_validate", (DL_FUNC)_dspline_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_dspline_rcpp_dot_divided_diff", (DL_FUNC) &_dspline_rcpp_dot_divided_diff, 2},
    {"_dspline_rcpp_divided_diff", (DL_FUNC) &_dspline_rcpp_divided_diff, 2},
    {"_dspline_rcpp_discrete_deriv", (DL_FUNC) &_dspline_rcpp_discrete_deriv, 4},
    {"_dspline_rcpp_discrete_integ", (DL_FUNC) &_dspline_rcpp_discrete_integ, 4},
    {"_dspline_rcpp_newton_interp", (DL_FUNC) &_dspline_rcpp_newton_interp, 3},
    {"_dspline_rcpp_dspline_interp", (DL_FUNC) &_dspline_rcpp_dspline_interp, 5},
    {"_dspline_rcpp_b_mat", (DL_FUNC) &_dspline_rcpp_b_mat, 5},
    {"_dspline_rcpp_h_mat", (DL_FUNC) &_dspline_rcpp_h_mat, 4},
    {"_dspline_rcpp_n_mat", (DL_FUNC) &_dspline_rcpp_n_mat, 4},
    {"_dspline_rcpp_h_eval", (DL_FUNC) &_dspline_rcpp_h_eval, 4},
    {"_dspline_rcpp_n_eval", (DL_FUNC) &_dspline_rcpp_n_eval, 5},
    {"_dspline_rcpp_n_eval_precomputed", (DL_FUNC) &_dspline_rcpp_n_eval_precomputed, 5},
    {"_dspline_rcpp_dot_b_mat_mult", (DL_FUNC) &_dspline_rcpp_dot_b_mat_mult, 6},
    {"_dspline_rcpp_dot_h_mat_mult", (DL_FUNC) &_dspline_rcpp_dot_h_mat_mult, 6},
    {"_dspline_rcpp_d_mat_mult", (DL_FUNC) &_dspline_rcpp_d_mat_mult, 5},
    {"_dspline_rcpp_b_mat_mult", (DL_FUNC) &_dspline_rcpp_b_mat_mult, 6},
    {"_dspline_rcpp_h_mat_mult", (DL_FUNC) &_dspline_rcpp_h_mat_mult, 6},
    {"_dspline_RcppExport_registerCCallable", (DL_FUNC) &_dspline_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_dspline(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
