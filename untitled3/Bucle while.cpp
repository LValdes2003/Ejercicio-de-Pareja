#include <iostream>

int main(){
    int numero;
    std::cout<<"Escoja un numero: ";std::cin>>numero;


    int i=3;
    std::cout<<"Tabla de multiplicar de "<<numero<<";"<<std::endl;

    while(i<=10) {
        int r=numero*i;
        std::cout<<numero<<"x"<<i<<"="<<r<<std::endl;
        i++;

    }

}

