#include <CSV.hpp>
#include <product_class.hpp>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

CSV::CSV(std::string &filePath) {
    this->filePath = filePath;
    this->delimiter = ',';
}

CSV::CSV(std::string &filePath, char delimiter) {
    this->filePath = filePath;
    this->delimiter = delimiter;
}

std::vector<Product> CSV::readAll() const {
    std::vector<Product> products;
    
    std::string line;
    std::ifstream FILE(this->filePath);

    if(FILE.is_open()) {
        std::getline(FILE, line); //Ignorar el encabezado;
        while(std::getline(FILE, line)) {
            std::vector<std::string> fields;
            std::stringstream ss(line);
            std::string field;
            while(std::getline(ss, field, this->delimiter)) {
                fields.push_back(field);
            }

            int code = std::stoi(fields[0]);
            int stock = std::stoi(fields[1]);
            std::string description = fields[2];
            float price_bougth = std::stof(fields[3]);
            float price_sell = std::stof(fields[4]);

            Product pt = Product(code, stock, price_sell, price_bougth, description);
            products.push_back(pt);
        }
    } else {
        std::cerr << "Error opening file!" << std::endl;
    }

    return products;
}

Product CSV::getRow(size_t index_) const {
    return Product();
}

std::vector<std::string> CSV::getColumn(size_t index_) const {
    return {};
}

void CSV::writeAll(const std::vector<Product>& products) {}

void CSV::append(const Product& product) {}

void CSV::save() {}