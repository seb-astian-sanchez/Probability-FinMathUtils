#include <iostream>
#include <cmath>

#include "finmath/interest.hpp"
#include "finmath/taylor.hpp"

int main() {
    //std::cout << NARnToNARm(0.10, 4, 2) << '\n';

    double x = 2;
    double test_e_taylor = finmath::e_taylor(x, 12);
    double actual_e_x = std:: exp(x);

    double error = std::abs(test_e_taylor - actual_e_x);

    std::cout << "e_taylor gives: " << test_e_taylor << '\n';
    std::cout << "e_x via cmath: " << actual_e_x << '\n';
    std::cout<< "error: " << error << '\n' << '\n';

    if(error >= 1 * 3e-2){
       std::cout<<"error exceeds threshold" << '\n';
    }
    else{
        std::cout<<"error less than threshold" << '\n';
    }

    return 0;
}