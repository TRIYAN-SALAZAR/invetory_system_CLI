#pragma once

#include <string>
#include <vector>
#include <product_class.hpp>

class CSV {
    private:
        std::string filePath;
        char delimiter;
    
    public:
        explicit CSV(std::string &filePath) {}
        explicit CSV(std::string &filePath, char delimiter) {}

        std::vector<Product> readAll() const;
        
        std::vector<std::string> getColumn(size_t index_) const;
        Product getRow(size_t index_) const;

        void writeAll(const std::vector<Product> &data);
        void append(const Product &dataProduct);

        void save();
};