#include <iostream>
#include <string>

int main() {
    std::string nombre;
    int edad;

    std::cout<< "Ingrese su nombre: ";
    std::cin >> nombre;

    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    std::cout << "Su nombre es: "<< nombre << std::endl;
    std::cout << "Su edad es de "<< edad<<"años"<< std::endl;

    return 0;
}



