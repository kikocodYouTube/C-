#include<iostream>

int main(){
    char salir;
    int lado;
    int col;
    int fil;
    std::cout<<"Tamaño del cuadrado: ";
    std::cin >> lado;
    for(col=1;col<=lado;col++){
       for(fil=1;fil<=lado;fil++){     
          std::cout<<'o';
          std::cout<<' ';
       }
       std::cout<<'\n';
    
    }
    
    std::cin >> salir;
}                                 
