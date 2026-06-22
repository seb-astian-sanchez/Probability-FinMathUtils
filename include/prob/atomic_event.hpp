#pragma once
#include "prob/prob_event.hpp"

#ifndef ATOMIC_EVENT_HPP
#define ATOMIC_EVENT_HPP

#include <string>
#include <unordered_map>

class atomic_event : public prob_event {
    public:
        atomic_event(std::string name, double prob_occurs);
        std::string get_name() const override;
};
#endif