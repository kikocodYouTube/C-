#include<iostream>

int main(){
    char salir;
    int num[4];
    float suma_numero;
    float media;
    int cont;
    for(cont=0;cont<=3;cont++){
      std::cout<<"Intrpduce el numero: ",cont, ":";
      std::cin >> num[cont];
    }  
    std::cout<<"\n"; 
    std::cout<<"Has metido los siguientes numeros: \n";
    for(cont=0;cont<=3;cont++){
       std::cout<<num[cont];
       std::cout<<"\n";
    }
    std::cout<<"\n";
    std::cout<<"MEDIA\n";
    suma_numero=0;
    for(cont=0;cont<=3;cont++){
        suma_numero=suma_numero+num[cont];                       
    }                           
    std::cout<<"La suma vale: ";
    std::cout<< suma_numero;
    media=suma_numero/4;
    std::cout<<"\n";
    std::cout<<"La media vale: ";
    std::cout<< media;
    
    
    
     
    std::cin >> salir;

}    
