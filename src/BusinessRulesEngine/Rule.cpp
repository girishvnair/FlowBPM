#include "Rule.h"

Rule::Rule(const std::string &name, const std::string &condition)
    : name(name), condition(condition) {}

std::string Rule::getName() const {
    return name;
}

std::string Rule::getCondition() const {
    return condition;
}
