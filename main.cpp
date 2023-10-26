#include <iostream>
#include "funciones.h"

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

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

     //Punteros de variables:
    int numero = 8;
    int* puntero_numero = &numero;
    std::cout << "Numero: " << numero << std::endl;
    std::cout << "Puntero: " << *puntero_numero << std::endl;

    //Punteros y arrays:
    int arreglo[5] = {1, 2, 3, 4, 5};
    int *puntero_arreglo = arreglo;

    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento " << i << ": " << *puntero_arreglo << std::endl;
        puntero_arreglo++;
    }
    //Asignación de memoria:
    int *puntero_dinamico = new int;
    *puntero_dinamico = 10;

    std::cout << "Valor asignado: " << *puntero_dinamico << std::endl;

    delete puntero_dinamico;
    //Aritmética de los punteros:
    puntero_arreglo = arreglo;

    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento " << i << ": " << *puntero_arreglo << std::endl;
        puntero_arreglo++;
    }

    puntero_arreglo = &arreglo[0];
    puntero_arreglo += 7;
    std::cout << "Despues de la aritmetica: " << *puntero_arreglo << std::endl;
    //Punteros de punteros
    int valor = 12;
    int *puntero1 = &valor;
    int **puntero2 = &puntero1;

    std::cout << "Valor: " << valor << std::endl;
    std::cout << "A traves del puntero1: " << *puntero1 << std::endl;
    std::cout << "A traves del puntero2: " << **puntero2 << std::endl;
    //Punteros de funciones:
    int (*funcion)(int, int);

    funcion = sumar;
    int resultado1 = funcion(9, 3);

    funcion = restar;
    int resultado2 = funcion(9, 3);

    std::cout << "Suma: " << resultado1 << std::endl;
    std::cout << "Resta: " << resultado2 << std::endl;
    
    //Referencias:

    int &referencia = numero;

    std::cout << "Numero: " << numero << std::endl;
    std::cout << "Referencia: " << referencia << std::endl;

    referencia = 13;

    std::cout << "Numero después de modificar la referencia: " << numero << std::endl;
    std::cout << "Referencia después de modificar la referencia: " << referencia << std::endl;


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


int main() {
    //Punteros de variables:
    int numero = 8;
    int* puntero_numero = &numero;
    std::cout << "Numero: " << numero << std::endl;
    std::cout << "Puntero: " << *puntero_numero << std::endl;

    //Punteros y arrays:
    int arreglo[5] = {1, 2, 3, 4, 5};
    int *puntero_arreglo = arreglo;

    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento " << i << ": " << *puntero_arreglo << std::endl;
        puntero_arreglo++;
    }
    //Asignación de memoria:
    int *puntero_dinamico = new int;
    *puntero_dinamico = 10;

    std::cout << "Valor asignado: " << *puntero_dinamico << std::endl;

    delete puntero_dinamico;
    //Aritmética de los punteros:
    puntero_arreglo = arreglo;

    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento " << i << ": " << *puntero_arreglo << std::endl;
        puntero_arreglo++;
    }

    puntero_arreglo = &arreglo[0];
    puntero_arreglo += 7;
    std::cout << "Despues de la aritmetica: " << *puntero_arreglo << std::endl;
    //Punteros de punteros
    int valor = 12;
    int *puntero1 = &valor;
    int **puntero2 = &puntero1;

    std::cout << "Valor: " << valor << std::endl;
    std::cout << "A traves del puntero1: " << *puntero1 << std::endl;
    std::cout << "A traves del puntero2: " << **puntero2 << std::endl;
    //Punteros de funciones:
    int (*funcion)(int, int);

    funcion = sumar;
    int resultado1 = funcion(9, 3);

    funcion = restar;
    int resultado2 = funcion(9, 3);

    std::cout << "Suma: " << resultado1 << std::endl;
    std::cout << "Resta: " << resultado2 << std::endl;
    //Referencias:

    int &referencia = numero;

    std::cout << "Numero: " << numero << std::endl;
    std::cout << "Referencia: " << referencia << std::endl;

    referencia = 13;

    std::cout << "Numero después de modificar la referencia: " << numero << std::endl;
    std::cout << "Referencia después de modificar la referencia: " << referencia << std::endl;





    return 0;

}
