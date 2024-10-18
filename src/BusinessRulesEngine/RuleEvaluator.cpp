#include "RuleEvaluator.h"
#include <iostream>

RuleEvaluator::RuleEvaluator() {}

bool RuleEvaluator::evaluate(const Rule &rule, const std::string &context) {
    return evaluateCondition(rule.getCondition(), context);
}

bool RuleEvaluator::evaluateCondition(const std::string &condition, const std::string &context) {
    // Basic condition evaluation (this can be expanded with more complex logic)
    if (condition == context) {
        std::cout << "Condition met: " << condition << std::endl;
        return true;
    }
    std::cout << "Condition not met: " << condition << std::endl;
    return false;
}
