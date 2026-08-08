#pragma once
#ifndef POWER_OF_TROY_H
#define POWER_OF_TROY_H
#include <string>
#include <memory>
namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
    
};

struct human {
    std::unique_ptr<artifact> possession;  // do not use make_unique or make_shared for creating new, use shared/unique_ptr
    std::shared_ptr<power> own_power;     // automatically equals to nullptr!!
    std::shared_ptr<power> influenced_by;
};
    //function headers
void give_new_artifact(human& human_name, std::string artifact_name); // & for make a change in adress not creating copy(r.v)
void exchange_artifacts(std::unique_ptr<artifact>& artifact1, std::unique_ptr<artifact>& artifact2);
void manifest_power(human& human1, std::string power_name);
void use_power(human& human1, human& human2);
int power_intensity(human& human1);
}

#endif
