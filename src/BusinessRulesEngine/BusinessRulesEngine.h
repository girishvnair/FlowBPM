#ifndef BUSINESS_RULES_ENGINE_H
#define BUSINESS_RULES_ENGINE_H

#include <string>
#include <vector>
#include "Rule.h"
#include "RuleEvaluator.h"

class BusinessRulesEngine {
public:
    BusinessRulesEngine();
    void addRule(const Rule &rule);
    bool evaluateRule(const std::string &ruleName, const std::string &context);

private:
    std::vector<Rule> rules;
    RuleEvaluator ruleEvaluator;
};

#endif // BUSINESS_RULES_ENGINE_H
