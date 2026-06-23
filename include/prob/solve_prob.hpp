#pragma once

#ifndef SOLVE_PROB_HPP
#define SOLVE_PROB_HPP

#include <string>
#include <unordered_map>
#include "prob/prob_event.hpp"

class solve_prob{
    private:
    std::unordered_map<std::string, double> intersectMap;

    public:        
        solve_prob();
        std::string keystring (const prob_event &eventA, const prob_event &eventB) const;
        double findCaps (const prob_event &eventA, const prob_event &eventB) const;
        double findCups (const prob_event &eventA, const prob_event &eventB) const;
        double get_prob_complement(const prob_event &eventA) const;
        double cup_via_cap(const prob_event &eventA, const prob_event &eventB) const;
        void add_intersect(const prob_event &eventA, const prob_event &eventB, double prob);
        const std::unordered_map<std::string, double>& getIntersects() const;
    };

#endif