#include <iostream>

int main(){
    int numero;

    std::cout<<"Escoja un numero:";std::cin>>numero;

    int i=2;
    std::cout<<"Tabla de multiplicar de"<<numero<<":"<<std::endl;
    do{
        int g=numero*i;
        std::cout<<numero<<"x"<<i<<"="<<g<<std::endl;
        i++;


    }while(i<=10);


}