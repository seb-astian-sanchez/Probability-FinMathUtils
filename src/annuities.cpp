#include "finmath/annuities.hpp"
#include <cmath>

//make function to fetch accumulation/discount factors based on interest type
//until then, will assume compound interest as a "placeholder"

double getDiscountRate(double effRate){
    return effRate/(effRate+1.0);
}

double getDiscountFactor(double effRate, double periodCount){
    return std:: pow(1-getDiscountRate(effRate), periodCount);
}

double PVannuityImm(double payment, double effRate, double periodCount){
    return payment * ((1.0- getDiscountFactor(effRate, periodCount))/effRate);
}

double PVannuityDue(double payment, double effRate, int periodCount);

double AVannuityImm(double payment, double effRate, int periodCount);

double AVannuityDue(double payment, double effRate, int periodCount);

double currentValAnnuity(double payment, double effRate, int periodCount);

double defferedAnnuity(double payment, double effRate, int periodCount);
