//
// Created by Oblitionmaster on 19/10/2023.
//

#include "iostream"
#include "string"

int main() {
    int edad;
    std::string nombre{};

    std::cout << "Introduce su nombre" << std::endl;
    std::cin >> nombre;

    std::cout << "Introduce su edad" << std::endl;
    std::cin >> edad;

    std::cout << "Hola " << nombre << " tienes " << edad << " años" << std::endl;
    return 0;
}