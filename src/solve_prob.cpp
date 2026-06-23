#include "prob/solve_prob.hpp"
#include <string>
#include <unordered_map>

solve_prob::solve_prob(){};


std::string solve_prob:: keystring (const prob_event &eventA, const prob_event &eventB) const{
    std::string key1 = (eventA.get_name() < eventB.get_name()) ? eventA.get_name() : eventB.get_name();
    std::string key2 = (eventB.get_name() != key1) ? eventB.get_name() : eventA.get_name();
    return key1 + key2;
};

double solve_prob::findCaps (const prob_event &eventA, const prob_event &eventB) const{
    if(intersectMap.empty()){
        return false;
    }
    std::string key = keystring(eventA, eventB);
    if(intersectMap.count(key)==0){
        return -1;
    }
    return intersectMap.at(key);
};

// double solve_prob::findCups (const prob_event &eventA, const prob_event &eventB) const{
//     if(intersectMap.empty()){
//         return false;
//     }
       //std::string key = keystring(eventA, eventB);
//     if(intersectMap.count(key)==0){
//         return -1;
//     }
//     return intersectMap.at(key);
// };

double solve_prob::get_prob_complement(const prob_event &eventA) const{
    return 1.0 - eventA.get_prob();
};


void solve_prob::add_intersect(const prob_event &eventA, const prob_event &eventB, double prob){
    std::string keyd = keystring(eventA, eventB);
    intersectMap[keyd] = prob;
};

const std::unordered_map<std::string, double>& solve_prob::getIntersects() const{
    return intersectMap;
};

double solve_prob::cup_via_cap(const prob_event &eventA, const prob_event &eventB) const{
    double intersect = findCaps(eventA, eventB);
    if(intersect > -1){
        return eventA.get_prob() + eventB.get_prob() - intersect;
        //add to cup (union) maps
    }
    return -1;
};

// double solve_prob::AgivenB(const prob_event &A, const prob_event &B) const{

// };
