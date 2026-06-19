#include <iostream>
#include <cmath>

#include "finmath/interest.hpp"
#include "finmath/taylor.hpp"
#include "finmath/annuities.hpp"

int main() {
    //std::cout << NARnToNARm(0.10, 4, 2) << '\n';

    // double x = 2;
    // double test_e_taylor = finmath::e_taylor(x, 12);
    // double actual_e_x = std:: exp(x);

    // double error = std::abs(test_e_taylor - actual_e_x);

    // std::cout << "e_taylor gives: " << test_e_taylor << '\n';
    // std::cout << "e_x via cmath: " << actual_e_x << '\n';
    // std::cout<< "error: " << error << '\n' << '\n';

    // if(error >= 1 * 3e-2){
    //    std::cout<<"error exceeds threshold" << '\n';
    // }
    // else{
    //     std::cout<<"error less than threshold" << '\n';
    // }

    double payment = 100.0;

    double effRate = 0.05;

    double periodCount = 10.0;

    double PVannuityImmediate = PVannuityImm(payment, effRate, periodCount);

    std:: cout << "Given i = " << effRate << ", the present value of a " << periodCount << " year annuity-immediate with payments of " << payment << " is " << PVannuityImmediate << '\n';

    return 0;
}