#include "lasagna_master.h"
#include <vector>
#include <string>

namespace lasagna_master {
    
// TODO: add your solution here
    int preparationTime(const std::vector<std::string>& layers, int layer_prep_time){
        return layers.size()*layer_prep_time;
    }
    amount quantities(const std::vector<std::string>& layers){
        int noodles{0};
        double sauce{0.0};
        for (auto &layer:layers){
            if (layer=="noodles"){
                noodles+=50;
            }
            else if (layer=="sauce"){
                sauce+=0.2;
            }
        }
        amount result{noodles,sauce};
        return result;
    }
    void addSecretIngredient (std::vector <std::string>& myList, const std::vector <std::string>& friendsList){
        myList.pop_back();
        myList.push_back(friendsList[friendsList.size()-1]);
    }
    std::vector <double> scaleRecipe(std::vector <double> quantities, double portions){
        for (auto &quantity:quantities){
            quantity*=portions/2;
        }
        return quantities;
    }
    void addSecretIngredient(std::vector <std::string>& myList, std::string secretIngredient){
        myList.pop_back();
        myList.push_back(secretIngredient);
    }
}  // namespace lasagna_master
