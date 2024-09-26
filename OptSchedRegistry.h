#ifndef OPTSCHEDREGISTRY_H
#define OPTSCHEDREGISTRY_H
#include <iostream>
#include <string>

#include "OptSchedTargetRegistry.h"
#include "OptSchedTargetRegistry.h"


template <typename FactoryT>
class OptSchedRegistryNode {
public:
  // llvm::SmallString<16> Name;
  std::string Name;
  FactoryT Factory;
  OptSchedRegistryNode *Next;

  OptSchedRegistryNode(std::string Name_, FactoryT Factory_)
      : Name(Name_), Factory(Factory_) {}
};

template <typename FactoryT>
class OptSchedRegistry {

private:
  OptSchedRegistryNode<FactoryT> *List = nullptr;
  OptSchedRegistryNode<FactoryT> *Default = nullptr;

public:
  void add(OptSchedRegistryNode<FactoryT> *Node) {
    // Logger::Info("JEFF Adding Registry Node %s", Node->Name.c_str());
    std::cout << "Adding Registry Node " << Node->Name.c_str() << std::endl;;
    Node->Factory();
    Node->Next = List;
    List = Node;
  }

  FactoryT getFactoryWithName(std::string Name) {
    FactoryT Factory = nullptr;
    std::string Match = Name;

    for (auto I = List; I; I = I->Next) {
      std::string Temp = I->Name;
      if (Match == Temp) {
        Factory = I->Factory;
        break;
      }
    }
    return Factory;
  }

};



#endif //OPTSCHEDREGISTRY_H
