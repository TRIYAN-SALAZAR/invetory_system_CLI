#include <product_class.hpp>
#include <iostream>

Product::Product(int code, int stock, float priceSell, float priceBought, std::string description) {
    this->code = code;
    this->stock = stock;
    this->priceSell = priceSell;
    this->priceBought = priceBought;
    if (description != "") this->description = description;
}

void Product::updateProduct(int stock, float priceSell, float priceBought, std::string description) {
    if(stock != -1) this->stock = stock;
    if(priceSell != -1)this->priceSell = priceSell;
    if(priceBought != -1)this->priceBought = priceBought;
    if(description != "")this->description = description;
}

void Product::showDataProduct() {
    std::cout << "Codigo: " << this->code;
    std::cout << "\nStock: " << this->stock;
    std::cout << "\nPrecio de Venta: " << this->priceSell;
    std::cout << "\nPrecio de compra: " << this->priceBought;
    std::cout << "\nDescripcion: " << this->description;
}

void Product::increaseStoctByPurchase(int stock) {
    this->stock += stock;
}

void Product::decreaseStockBySell(int stock) {
    int resForSubstration = this->stock - stock;
    
    if(resForSubstration >= 0) {
        this->stock = resForSubstration;
    } else {
        this->stock = 0;
    }
}