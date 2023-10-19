//
// Created by Oblitionmaster on 19/10/2023.
//

#include "iostream"
#include "nombre_edad.h"

int main() {
    char* nombre = new char[100];
    int edad;
    std::cout << "Introduce tu nombre: \n";
    std::cin >> nombre;
    std::cout << "Introduce tu edad: \n";
    std::cin >> edad;
    std::cout << nom_edad(nombre, edad) << std::endl;
    delete[] nombre;
    return 0;
}