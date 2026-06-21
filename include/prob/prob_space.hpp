#pragma once

#ifndef PROB_SPACE_HPP
#define PROB_SPACE_HPP

#include <string>
#include <unordered_map>
#include "prob/prob_event.hpp"

class prob_space{
    private:
        // std::string experiment_name;
        // const int prob = 1;        
        std::unordered_map<std::string, prob_event> sample_space;

    public:
        prob_space();
        void add_event(std::string event_name, double prob);
        const std::unordered_map<std::string, prob_event>& getTest() const;
        
};

#endif