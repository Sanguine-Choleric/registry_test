#ifndef OPTSCHEDTARGETREGISTRY_H
#define OPTSCHEDTARGETREGISTRY_H
#include "OptSchedTarget.h"
#include <vector>
#include <memory>
#include <string>

#include "OptSchedRegistry.h"

class OptSchedTargetRegistry : public OptSchedRegistryNode<std::unique_ptr<OptSchedTarget> (*)() >{
public:
    using OptSchedTargetFactory = std::unique_ptr<OptSchedTarget> (*)();
    // static std::vector<OptSchedTargetFactory> Registry;
    static OptSchedRegistry<OptSchedTargetFactory> Registry;

    OptSchedTargetRegistry(std::string name, OptSchedTargetFactory factory) : OptSchedRegistryNode(name, factory) {
        // Registry.push_back(factory);
        Registry.add(this);
    }
};
#endif // OPTSCHEDTARGETREGISTRY_H
