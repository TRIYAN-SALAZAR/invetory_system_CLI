#pragma once
#include <string>

class Product {
    public:
        int code;
        int stock;
        float priceBought;
        float priceSell;
        std::string description;

        Product() {}
        Product(int code, int stock, float priceSell, float priceBought, std::string description);

        void updateProduct(int stock, float priceSell, float priceBought, std::string description);
        void showDataProduct();
};