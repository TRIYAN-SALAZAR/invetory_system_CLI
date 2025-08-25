#include <CSV.hpp>
#include <product_class.hpp>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

CSV::CSV(std::string &filePath) {
    this->filePath = filePath;
    this->delimiter = ',';
}

CSV::CSV(std::string &filePath, char delimiter) {
    this->filePath = filePath;
    this->delimiter = delimiter;
}

std::vector<Product> CSV::readAll() const {}

Product CSV::getRow(size_t index_) const {
    return Product();
}

std::vector<std::string> CSV::getColumn(size_t index_) const {
    return {};
}

void CSV::writeAll(const std::vector<Product>& products) {}

void CSV::append(const Product& product) {}

void CSV::save() {}