#include <iostream>

int zx();  // Prototipo de funcion

int n; // Variable global

int main() {
    int zxn; // Variable local
    std::cout<<"\nNumero para calcular su cuadrado: ";
    std::cin>>n;
    zxn=zx();
    std::cout<<"\nEl cuadrado de"<<n<<"es: "<<zxn<<std::endl;

    return 0;


}

int zx() {
    int zxn;   //Variable local
    zxn= n*n;
    return zxn;
}