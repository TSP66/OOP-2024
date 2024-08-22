#include "Asset.h"

Asset::Asset(){
    Asset::value = 0;
    Asset::product_type = "";
}

Asset::Asset(int value, std::string product_type){
    Asset::value = value;
    Asset::product_type = product_type;
}

std::string Asset::get_product_type(){
    return Asset::product_type;
}

int Asset::get_value(){
    return Asset::value;
}

Asset::~Asset(){
    
}