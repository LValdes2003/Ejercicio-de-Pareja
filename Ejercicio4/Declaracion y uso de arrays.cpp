#include <iostream>

int main(){
    int numero[10];
    for(int g=0;g<=10;g++) {

        numero[g]=g+1;
    }

    for(int g=0;g<10;g++){

        std::cout<<numero[g]<<"\n";
    }

    std::cout<<std::endl;

    return 0;

}
