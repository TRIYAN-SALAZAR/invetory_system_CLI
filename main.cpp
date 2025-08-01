#include <iostream>
#include <vector>

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

void addNewProduct() {}
void searchProduct() {}
void updateProduct() {}
void deleteProduct() {}
void getListAllProducts() {}
void updateStock() {}