#include "TargetA.h"
#include "OptSchedTargetRegistry.h"
#include <iostream>

// std::vector<OptSchedTargetRegistry::OptSchedTargetFactory> OptSchedTargetRegistry::Registry;
OptSchedRegistry<OptSchedTargetRegistry::OptSchedTargetFactory> OptSchedTargetRegistry::Registry;

void ConcreteTargetA::execute() {
    std::cout << "Executing ConcreteTargetA" << std::endl;
}

std::unique_ptr<OptSchedTarget> CreateConcreteTargetA() {
    return std::make_unique<ConcreteTargetA>();
}

OptSchedTargetRegistry RegisterConcreteTargetA("ConcreteTargetA", CreateConcreteTargetA);
