#include <iostream>

int main(){
    int edad;
    std::cout<<"Escribe la edad: ";
    std::cin>>edad;
    if(edad >=1 &&  edad <= 30){
        std::cout<<"Primera edad\n";
    }else

    if (edad >=31 && edad<= 60){
        std::cout<<"Segunda edad\n";
    }else

    if (edad >=61 && edad <=90){
        std::cout<<"Tercera edad\n";
    }else

    if (edad >=91){
        std::cout<<"Horas extras\n";
    }

    return 0;
} 