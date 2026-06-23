#include "prob/prob_space.hpp"
#include <string>
#include <unordered_map>
#include <iostream>

prob_space::prob_space(){};

void prob_space::add_event(std::string event_name, double prob){
    sample_space.insert_or_assign(event_name, prob_event(event_name, prob));
};

const std::unordered_map<std::string, prob_event>& prob_space::getTest() const{
    return sample_space;
};

double prob_space::mu_discrete(std::vector<std::vector<double>> table){
    double res{0};
    for(int i = 0; i< table[0].size(); i++){
        res += table[0][i] * table[1][i];
        std::cout << "sum, " << res << " is made by " << table[0][i] << " and " <<  table[1][i] << '\n';
    }
    return res;
};
