#include "prob/prob_space.hpp"
#include <string>
#include <unordered_map>

prob_space::prob_space(){};

void prob_space::add_event(std::string event_name, double prob){
    sample_space.insert_or_assign(event_name, prob_event(event_name, prob));
};

const std::unordered_map<std::string, prob_event>& prob_space::getTest() const{
    return sample_space;
};
