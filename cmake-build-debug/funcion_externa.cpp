#include <iostream>

void juego() {
    int a = 3;
    int b;
    std::cout << "¿Qué es mi número favorito?" << std::endl;
    std::cin >> b;
    if (b == a) {
        std::cout << "¡Correcto!" << std::endl;
    } else {
        std::cout << "¡Incorrecto!" << std::endl;
    }
}