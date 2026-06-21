#include "prob/prob_event.hpp"
#include <string>
#include <unordered_map>


prob_event::prob_event(std::string name, double prob_occurs): event_name(name), probability_occurs(prob_occurs) {};

std::string prob_event::get_name() const{
    return event_name;
};
double prob_event::get_prob() const{
    return probability_occurs;
};

//pass ref
bool prob_event::operator<(const prob_event &other) const{
    return event_name < other.event_name;
};
