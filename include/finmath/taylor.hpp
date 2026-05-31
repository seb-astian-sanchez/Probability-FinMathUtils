#pragma once

#include <cmath>
#include <stdexcept>

namespace finmath{

double e_taylor(double x, int terms);
//double e_taylor_until(double x, double tol = 1e-12, int max_terms = 100);

double log1plus_r_taylor(double x, int terms);
double sin_taylor(double x, int terms);
double cos_taylor(double x, int terms);
}