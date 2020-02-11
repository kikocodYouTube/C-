#include<iostream>
#include<stdio.h>
#include<stdlib.h>
int main(){
   struct Amigo{
          int n_amigo;
          float dinero;
   
   };
   char salir;
   Amigo pepito;//Guardo memoria para un dato de tipo Amigo
   std::cout<<"Dime tu numero, Pepito: ";
   std::cin >> pepito.n_amigo;
   std::cout<<"Dime cuanta pasta tienes: ";
   std::cin >> pepito.dinero;   
   //Recupero datos de mi amigo Pepito
   std::cout<<"Ya tengo un amigo que sellama Pepito"; 
   std::cout<<"\nPepito es mi amigo nº"<<pepito.n_amigo;
   std::cout<<"\ny tienes "<<pepito.dinero<<" euros";
   std::cin>>salir;
}
