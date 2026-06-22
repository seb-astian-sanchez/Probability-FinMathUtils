#include "prob/atomic_event.hpp"
#include <string>
#include <unordered_map>


atomic_event::atomic_event(std::string name, double prob_occurs): prob_event(name,prob_occurs) {};

std::string atomic_event::get_name() const{
    return "atomic event: " + prob_event::get_name();
};