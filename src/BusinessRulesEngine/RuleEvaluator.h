#ifndef RULE_EVALUATOR_H
#define RULE_EVALUATOR_H

#include "Rule.h"
#include <string>

class RuleEvaluator {
public:
    RuleEvaluator();
    bool evaluate(const Rule &rule, const std::string &context);

private:
    bool evaluateCondition(const std::string &condition, const std::string &context);
};

#endif // RULE_EVALUATOR_H
