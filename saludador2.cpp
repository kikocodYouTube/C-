#include<iostream>

int main(){
    char respuesta;
    char salir;
    std::cout<<"Hola crack";
    std::cout<<"Te gustan los trenes? (s/n): ";
    std::cin>>respuesta;
    //&& significa AND
    //|| significa or
    if(respuesta=='s' || respuesta=='S'){    
        std::cout <<"A mi también";
    }
    else{
        std::cout <<"Vete";
        }
    std::cin >> salir;
}
        

