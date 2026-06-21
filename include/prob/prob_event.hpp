#pragma once

#ifndef PROB_EVENT_HPP
#define PROB_EVENT_HPP

#include <string>
#include <unordered_map>

class prob_event {
    private:
        std::string event_name;
        double probability_occurs;
        std::unordered_map<std::string, double> intersectMap;
    
    public:
        prob_event(std::string name, double prob_occurs);
        std::string get_name() const;
        double get_prob() const;

        bool operator < (const prob_event &other) const;

        //basically a comparator so std::set works in prob_space class
};
#endif