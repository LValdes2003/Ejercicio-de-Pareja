#include <iostream>
#include <cstdarg>

//  Declara varias funciones
// Funciones homónimas (polimorfismo)
int suma(int a, int b, int c){
    return a+b+c;
}

// procedimientos
void imprimir(){
    int variableLocal = 3;
    std::cout << "Mi número favorito es: " << variableLocal << std::endl;
    // variableLocal se destruye al salir de la función
}

// Número variable de argumentos
int sumaVariable(int n, ...){
    int sumaVariable = 0;
    va_list lista;
    va_start(lista, n);
    for (int i = 0; i < n; ++i) {
        sumaVariable += va_arg(lista, int);
    }
    va_end(lista);
    return sumaVariable;
}

// Argumentos con valores predeterminados
double porcentage(double a, int b = 100){
    return a*b;
}

// Función recursiva
int fibonacci(int n){
    if (n == 0) {
        return 0;
    } else if (n == 1){
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

// Tipo void
void holamundo() {
    std::cout << "Hola mundo!" << std::endl;
}