#include "iostream"
#include "funciones.h"

// Funciones en línea
inline int suma(int a, int b) {
    return a + b;
}

extern void juego();

// función main
int main(int argc, char** argv) {
    // Llamada de las funciones
    // Declaración de una función
    imprimir();
    std::cout << "La posición 7 en la secuencia de fibonacci es " << fibonacci(7) << std::endl;
    std::cout << "El valor porcentual de 10 es " << porcentage(10) << "%" << std::endl;
    std::cout << "La suma de 2 y 3 es " << suma(2, 3) << std::endl;
    std::cout << "La suma de 2, 3 y 4 es " << suma(2, 3, 4) << std::endl;
    std::cout << "La suma de 2, 3, 4 y 5 es " << sumaVariable(4, 2, 3, 4, 5) << std::endl;
    juego();
    std::cout << "El valor de argc es " << argc << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }
    return 0;
}