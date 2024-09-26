#include "TargetB.h"
#include <iostream>

#include "OptSchedTargetRegistry.h"

void ConcreteTargetB::execute() {
    std::cout << "Executing ConcreteTargetB" << std::endl;
}

std::unique_ptr<OptSchedTarget> CreateConcreteTargetB() {
    return std::make_unique<ConcreteTargetB>();
}

static OptSchedTargetRegistry RegisterConcreteTargetB("ConcreteTargetB", CreateConcreteTargetB);
