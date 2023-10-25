#include <iostream>

int main(){
    int a=5;
    int b=7;

    int suma=(a+b);
    std::cout<<"El resultado de la suma es: "<<suma<<std::endl;

    int resta=(a-b);
    std::cout<<"El resultado de la resta es: "<<resta<<std::endl;

    int multiplicacion=(a*b);
    std::cout<<"El resultado de la multipliacion es: "<<multiplicacion<<std::endl;

    int division=(a/b);
    std::cout<<"El resultado de la division: "<<division<<std::endl;

    int modulo=(a%b);
    std::cout<<"El modulo es: "<<modulo<<std::endl;

    //operadores comparacion

    //En estos operadores se produce un resultado de tipo booleano, si es verdadero saldra 1 y si es falso saldra0.

    int x=5;
    int y=12;

    bool loMismo=(x==y);
    bool noEsloMismo(x!=y);
    bool menor=(x<y);
    bool mayor=(x>y);
    bool menorIgual=(x<=y);
    bool mayorIgual=(x>=y);

    std::cout<<"Igual: "<<loMismo<<std::endl;
    std::cout<<"Diferente: "<<noEsloMismo<<std::endl;
    std::cout<<"Menor: "<<menor<<std::endl;
    std::cout<<"Menor o igual: "<<menorIgual<<std::endl;
    std::cout<<"Mayor o igual: "<<mayorIgual<<std::endl;



}






