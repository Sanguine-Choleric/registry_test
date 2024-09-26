#ifndef TARGETA_H
#define TARGETA_H
#include "OptSchedTarget.h"
#include <memory>

class ConcreteTargetA : public OptSchedTarget {
public:
    void execute() override;
};

std::unique_ptr<OptSchedTarget> CreateConcreteTargetA();
#endif // TARGETA_H
