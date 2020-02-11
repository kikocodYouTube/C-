#include<iostream>

int main(){
    char salir;
    int ntabla;
    int cont;
    std::cout <<"Que tabla deseas que muestre: ";
    std::cin >> ntabla;
    std::cout <<"*******************************\n";
    std::cout <<"         TABLA DEL: ";
    std::cout <<ntabla;
    std::cout <<"         \n";
    std::cout <<"*******************************\n";
    for(cont=0;cont<=10;cont=cont+1){
        std::cout << ntabla;
        std::cout << " x ";
        std::cout << cont;                                                                   
        std::cout << " = ";
        std::cout << ntabla*cont;
        std::cout << "\n";
    }                                 
    
    
    
    
    std::cin >> salir;
}
