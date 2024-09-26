#include "OptSchedTargetRegistry.h"
#include <iostream>

int main() {
    auto f = OptSchedTargetRegistry::Registry.getFactoryWithName("ConcreteTargetB");
    f()->execute();
    return 0;
}