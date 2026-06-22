#include <iostream>
#include <cmath>

#include "finmath/interest.hpp"
#include "finmath/taylor.hpp"
#include "finmath/annuities.hpp"
#include "prob/prob_space.hpp"
#include "prob/prob_event.hpp"
#include "prob/atomic_event.hpp"



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

    // double payment = 100.0;

    // double effRate = 0.05;

    // double periodCount = 10.0;

    // double PVannuityImmediate = PVannuityImm(payment, effRate, periodCount);

    // std:: cout << "Given i = " << effRate << ", the present value of a " << periodCount << " year annuity-immediate with payments of " << payment << " is " << PVannuityImmediate << '\n' << '\n';

    // prob_event eventA("A", 0.1);

    // std::cout << "event " << eventA.get_name() << " has a " << eventA.get_prob() << " chance of happening"  << '\n' << '\n' ;

    // prob_space spaceS{};

    // spaceS.add_event("B", 0.2);

    // const auto& sample_space = spaceS.getTest();
    
    // const auto& test = sample_space.at("B");

    // std::cout << "event " << test.get_name() << " has a " << test.get_prob() << " chance of happening"  << '\n' << '\n' ;

    // eventA.add_intersect("B", 0.2);

    // const auto& intersect_map = eventA.getIntersects();

    // const auto& BcapA = intersect_map.at("B");

    // std::cout << "event B intersect A has a " << BcapA << " chance of happening"  << '\n' << '\n' ;
        
    
    prob_event eventA("A", 0.1);
    atomic_event eventB("B", 0.3);

    std::cout << eventA.get_name() << "\n";
    std::cout << eventB.get_name() << "\n";
    std::cout << eventA.get_prob() << "\n";
    std::cout << eventB.get_prob() << "\n";

    prob_event* ptr = &eventB;
    std::cout << ptr->get_name() << "\n";

    return 0;
}