#include "power_of_troy.h"
#include <memory>
#include <utility>


namespace troy {
    void give_new_artifact(human& human_name, std::string artifact_name){ 
        human_name.possession=std::make_unique<artifact>(artifact_name);
    }
    void exchange_artifacts(std::unique_ptr<artifact>& artifact1, std::unique_ptr<artifact>& artifact2) {
        std::swap(artifact1, artifact2);
}
    void manifest_power(human& human1, std::string power_name){
        human1.own_power=std::make_shared<power>(power_name);
}
    void use_power(human& human1, human& human2){
        if (human1.own_power!=nullptr){  //own_power can be nullptr if manifest_power have'nt used yet, check it.
            human2.influenced_by=human1.own_power; //thanks to shared_ptr they are both sharing same addres right now.
        }
    }
    int power_intensity(human& human1) {
        if (human1.own_power != nullptr) {
            return human1.own_power.use_count(); 
        }
        else if (human1.influenced_by != nullptr) {
            return human1.influenced_by.use_count();
        }
        return 0;
}  
} // namespace troy
