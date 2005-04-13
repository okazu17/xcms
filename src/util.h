#include <Rdefines.h>

void DescendZero(double *yvals, int *numin, int *istart, 
                 int *ilower, int *iupper);

void DescendMin(double *yvals, int *numin, int *istart, 
                int *ilower, int *iupper);

void FindEqualGreaterM(const double *in, const int *size, const double *values, 
                       const int *valsize, int *index);

void FindEqualGreater(const double *in, const int *size, const double *target, 
                      int *index);

void FindEqualLess(const double *in, const int *size, const double *target, 
                   int *index);

void ColMax(const double *in, const int *n, const int *dn, double *out);

void RowMax(const double *in, const int *dn, const int *p, double *out);

SEXP DoubleMatrix(SEXP nrow, SEXP ncol);

SEXP LogicalMatrix(SEXP nrow, SEXP ncol);
