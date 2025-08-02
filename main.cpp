#include <iostream>
#include <string>
#include <vector>

class Product;
std::vector<Product> PRODUCTS;

void addNewProduct();
void searchProduct();
void updateProduct();
void deleteProduct();
void getListAllProducts();
void updateStock();
int menu();

int main() {
    int opt = menu();
    switch (opt)
    {
    case 1:
        addNewProduct();
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    default:
        std::cout << "Opcion no valida\n";
        break;
    }
    return 0;
}

int menu() {
    int opt;
    std::cout << "Que accion deseas realizar?\n";
    std::cout << "1) Dar de alta un producto\n";
    std::cout << "2) Buscar un producto\n";
    std::cout << "3) Actualizar un producto\n";
    std::cout << "4) Eliminar un producto\n";
    std::cout << "5) Lista de todos los producto\n";

    std::cin >> opt;
    return opt;
}

void addNewProduct() {
    int code;
    int stock;
    float priceBought;
    float priceSell;
    std::string description = "";

    std::cout << "Ingresa codigo: ";
    std::cin >> code;
    
    std::cout << "\nIngresa la cantidad total del producto: ";
    std::cin >> stock;

    std::cout << "\nIngresa el precio de compra: ";
    std::cin >> priceBought;

    std::cout << "\nIngresa el precio de venta: ";
    std::cin >> priceSell;

    std::cout << "\nIngresa una breve descripcion: ";
    std::cin >> description;

    Product product;
    if(description != "") {
        product.setProduct(code, stock, priceSell, priceBought);
    } else {
        product.setProduct(code, stock, priceSell, priceBought, description);
    }

    PRODUCTS.push_back(product);
}

void searchProduct() {}
void updateProduct() {}
void deleteProduct() {}
void getListAllProducts() {}
void updateStock() {}

class Product {
    private:
        int code;
        int stock;
        float priceBought;
        float priceSell;
        std::string description;

    public:
        Product() {}

        void setProduct(int code, int stock, float priceSell, float priceBought) {
            this->code = code;
            this->stock = stock;
            this->priceSell = priceSell;
            this->priceBought = priceBought;
        }

        void setProduct(int code, int stock, float priceSell, float priceBought, std::string description) {
            this->code = code;
            this->stock = stock;
            this->priceSell = priceSell;
            this->priceBought = priceBought;
            this->description = description;
        }
};