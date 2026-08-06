#pragma once
#ifndef LASAGNA_MASTER_H
#define LASAGNA_MASTER_H
#include <vector>
#include <string>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};
    //function headers
    int preparationTime(const std::vector<std::string>& layers, int layer_prep_time=2);
    amount quantities(const std::vector<std::string>& layers);
    void addSecretIngredient (std::vector <std::string>& myList, const std::vector <std::string>& friendsList);
    std::vector <double> scaleRecipe(std::vector <double> quantities, double portions);
    void addSecretIngredient(std::vector <std::string>& myList, std::string secretIngredient);
    

}  // namespace lasagna_master

#endif