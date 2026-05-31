#include "finmath/interest.hpp"
#include <cmath>

double NARtoEAR(double nomRate, int m){
    return std :: pow(1+(nomRate/m), m) -1;
}

double EARtoNAR(double effRate, int m){
    return (std :: pow(1+effRate, (1.0/m)) - 1) * m;
}

double NARnToNARm(double nRate, int n, int m){
    return EARtoNAR(NARtoEAR(nRate, n), m);
}