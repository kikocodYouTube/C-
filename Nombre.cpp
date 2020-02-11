#include<iostream>

int main(){
    char palabra[20];
    char salir;
    int cont;
    int longitud;
    std::cout<<"Dime tu nombre: ";
    std::cin >> palabra;
    
    std::cout<<"\nLa primera letra de tu nombre es la ";
    std::cout<<palabra[0];
    std::cout<<"\n\n";
    for(cont=0;cont<=19;cont++){
        if(palabra[cont]!='\0'){
            longitud=longitud+1;                    
        }                        
    }    
    std::cout<<"El nombre de ";
    std::cout<<palabra;
    std::cout<<" tiene ";
    std::cout<<longitud;
    std::cout<<" letras ";
    std::cin >> salir;
} 
