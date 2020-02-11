#include<iostream>

int main(){
    int a[4];
    int cont;
    char salir;
    for(cont=0;cont<4;cont++){
      std::cout<<"Introduce el "<<cont<< " numero: ";
      std::cin>>a[cont];
      
      }
     std::cout<<*a[cont];
    std::cin>>salir;
}
    
