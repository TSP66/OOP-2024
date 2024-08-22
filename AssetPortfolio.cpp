#include <iostream>
#include <string>
#include "Asset.h"
#include "AssetPortfolio.h"

AssetPortfolio::AssetPortfolio(){
    AssetPortfolio::size = 0;
    AssetPortfolio::num_assets = 0;
}

AssetPortfolio::AssetPortfolio(int size){
    AssetPortfolio::size = size;
    AssetPortfolio::assets = new Asset[size];
    AssetPortfolio::num_assets = 0;
}

int AssetPortfolio::get_num_assets(){
    return AssetPortfolio::num_assets;
}

bool AssetPortfolio::has_asset(std::string product){
    for (int i = 0; i < AssetPortfolio::num_assets; i++){
        if (AssetPortfolio::assets[i].get_product_type() == product)
            return true;
    }
    return false;
}
Asset *AssetPortfolio::get_assets(){
    return AssetPortfolio::assets;
}

bool AssetPortfolio::add_asset(Asset new_asset){
    if(AssetPortfolio::num_assets == AssetPortfolio::size)
        return false;
    AssetPortfolio::assets[AssetPortfolio::num_assets] = new_asset;
    AssetPortfolio::num_assets += 1;
    return true;
}

AssetPortfolio::~AssetPortfolio(){
    delete [] AssetPortfolio::assets;
}