#include "BusinessRulesEngine.h"
#include <iostream>

BusinessRulesEngine::BusinessRulesEngine() {}

void BusinessRulesEngine::addRule(const Rule &rule) {
    rules.push_back(rule);
    std::cout << "Rule added: " << rule.getName() << std::endl;
}

bool BusinessRulesEngine::evaluateRule(const std::string &ruleName, const std::string &context) {
    for (const auto &rule : rules) {
        if (rule.getName() == ruleName) {
            return ruleEvaluator.evaluate(rule, context);
        }
    }
    std::cout << "Rule not found: " << ruleName << std::endl;
    return false;
}
