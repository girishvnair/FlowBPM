#ifndef RULE_H
#define RULE_H

#include <string>

class Rule {
public:
    Rule(const std::string &name, const std::string &condition);
    std::string getName() const;
    std::string getCondition() const;

private:
    std::string name;
    std::string condition;
};

#endif // RULE_H
