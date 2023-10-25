#include "iostream"
#include "funciones.h"

// Constante simbólica
#define PI 3.14159265358979323846;
double area = 4*4*PI

// Typedef
typedef unsigned char uchar;
uchar uno = 1;

// Enumeraciónes
enum numeros {
    dos [[maybe_unused]] = 2,
    tres = 3,
    cien [[maybe_unused]] = 100
};
numeros numeroFavorito = tres;

// Funciones en línea
inline int suma(int a, int b) {
    return a + b;
}

// Funciones externas
extern void juego();

// Función main
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

    std::cout << "El area de un circulo con radio 4 es: " << area << std::endl;

    // Tipo void
    holamundo();

    // Tipo void*
    void* memoria = std::malloc(3);
    char* cadena = static_cast<char*>(memoria);
    cadena[0] = 'H';
    cadena[1] = 'e';
    cadena[2] = 'y';
    std::cout << cadena << std::endl;

    std::cout << "El valor de uno es: " << uno << std::endl;

    std::cout << "Mi numero favorito es: " << numeroFavorito << std::endl;

    std::cout << "El valor de argc es " << argc << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }
    return 0;
}