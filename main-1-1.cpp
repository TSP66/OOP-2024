#include <iostream>
#include "Asset.h"

int main(){
    Asset building(100, "house");
    std::cout << building.get_product_type() << std::endl;
    std::cout << building.get_value() << std::endl;

    Asset building2;
    std::cout << building2.get_product_type() << std::endl;
    std::cout << building2.get_value() << std::endl;
    
    return 0;
}