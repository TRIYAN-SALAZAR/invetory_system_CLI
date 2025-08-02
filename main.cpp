#include <iostream>
#include <string>
#include <vector>

class Product;
std::vector<Product> PRODUCTS;

void addNewProduct();
void searchProductByCode();
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
    product.setProduct(code, stock, priceSell, priceBought, description);

    PRODUCTS.push_back(product);
}

void searchProductByCode() {
    int code;
    Product *foundProduct = nullptr;

    std::cout << "Ingresa el codigo del producto: ";
    std::cin >> code;

    for(Product &p: PRODUCTS) {
        if(p.code == code) {
            foundProduct = &p;
            break;
        }
    }

    if(foundProduct)
        foundProduct->showDataProduct();
    else
        std::cout << "Este producto no existe.";
}

void updateProduct() {
    int code = -1;
    int stock = -1;
    float priceBought = -1;
    float priceSell = -1;
    std::string description = "";
    std::string input;

    Product *foundProduct;

    std::getline(std::cin >> std::ws, input);
    if (!input.empty()) code = std::stoi(input);

    std::cout << "\nIngresa la cantidad total del producto (enter para no cambiar): ";
    std::getline(std::cin, input);
    if (!input.empty()) stock = std::stoi(input);

    std::cout << "\nIngresa el precio de compra (enter para no cambiar): ";
    std::getline(std::cin, input);
    if (!input.empty()) priceBought = std::stof(input);

    std::cout << "\nIngresa el precio de venta (enter para no cambiar): ";
    std::getline(std::cin, input);
    if (!input.empty()) priceSell = std::stof(input);

    std::cout << "\nIngresa una breve descripcion (enter para no cambiar): ";
    std::getline(std::cin, description);

    for(Product &p: PRODUCTS) {
        if(p.code == code) {
            foundProduct = &p;
            break;
        }
    }

    if(foundProduct) {
        foundProduct->updateProduct(stock, priceSell, priceBought, description);
    }
}

void deleteProduct() {}
void getListAllProducts() {}
void updateStock() {}

class Product {
    public:
        int code;
        int stock;
        float priceBought;
        float priceSell;
        std::string description;

        Product() {}

        void setProduct(int code, int stock, float priceSell, float priceBought, std::string description) {
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