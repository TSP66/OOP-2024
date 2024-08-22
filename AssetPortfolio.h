#ifndef ASSETPORT_H
#define ASSETPORT_H


#include <iostream>
#include <string>
#include "Asset.h"

class AssetPortfolio{
    private:
    int size;
    Asset * assets;
    int num_assets;
    public:
    AssetPortfolio();
    AssetPortfolio(int size); 
    int get_num_assets(); 
    bool has_asset(std::string product); 
    Asset *get_assets(); 
    bool add_asset(Asset new_asset);
    ~AssetPortfolio();
};

#endif