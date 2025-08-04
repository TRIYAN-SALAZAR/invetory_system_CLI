#ifndef HEADER_H_PRODUCT_CLASS
#define HEADER_H_PRODUCT_CLASS

#include <string>
#include <iostream>

class Product {
    public:
        int code;
        int stock;
        float priceBought;
        float priceSell;
        std::string description;

        Product() {}

        Product(int code, int stock, float priceSell, float priceBought, std::string description) {
            this->code = code;
            this->stock = stock;
            this->priceSell = priceSell;
            this->priceBought = priceBought;
            if(description != "") this->description = description;
        }

        void updateProduct(int stock, float priceSell, float priceBought, std::string description) {
            if(stock != -1) this->stock = stock;
            if(priceSell != -1)this->priceSell = priceSell;
            if(priceBought != -1)this->priceBought = priceBought;
            if(description != "")this->description = description;
        }

        void showDataProduct() {
            std::cout << "Codigo: " << this->code;
            std::cout << "\nStock: " << this->stock;
            std::cout << "\nPrecio de Venta: " << this->priceSell;
            std::cout << "\nPrecio de compra: " << this->priceBought;
            std::cout << "\nDescripcion: " << this->description;
        }
};
#endif