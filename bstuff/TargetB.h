#ifndef TARGETB_H
#define TARGETB_H
#include "OptSchedTarget.h"
#include <memory>

class ConcreteTargetB : public OptSchedTarget {
public:
    void execute() override;
};

std::unique_ptr<OptSchedTarget> CreateConcreteTargetB();
#endif // TARGETB_H
