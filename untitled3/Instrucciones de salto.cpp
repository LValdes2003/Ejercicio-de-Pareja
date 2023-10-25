#include <iostream>

int main(){
    int i=1;

    while(i<14) {
        std::cout<<i<<std::endl;

        if(i==4) {
            std::cout<<"Saliendo del bucle"<<std::endl;
            break;

        }
        i++;
    }
}

