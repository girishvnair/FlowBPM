#ifndef JOB_H
#define JOB_H

#include <string>

class Job {
public:
    Job(const std::string &name, int intervalInSeconds);
    std::string getName() const;
    int getInterval() const;
    void execute() const;

private:
    std::string name;
    int intervalInSeconds;
};

#endif // JOB_H
