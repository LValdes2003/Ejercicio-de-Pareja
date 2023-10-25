#include <iostream>

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
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
