#include "finmath/taylor.hpp"
#include <cmath>
#include <stdexcept>

namespace finmath{
    
    //using Maclaurin series, approximates e^x
    //recall: e^x \approx \sum_{n=0}^{N=terms} \frac{x^n}{n!}
    // so we can increment n, make it a denominator, x the numerator 
    // and multiply each time in a for loop.
    double e_taylor(double x, int terms){
        if (terms <= 0){
            throw std::invalid_argument("must have positive integer number terms");
        }

        double sum = 1.0;
        double curr_summand = 1.0;

        for(int n = 1; n<terms; ++n){
            curr_summand *= x/n; 
            sum+= curr_summand;
        }
        return sum;

    }
}