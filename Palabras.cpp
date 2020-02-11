#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int devuelve_longitud(char aux[]){
    int cont=0;
    int longitud=0;
    while(aux[cont]!='\0'){
        longitud++;
        cont++;
    }
    return(longitud);

}




int main(){
    char *palabras[4],*paux;
    int cont;
    char aux[20];
    char salir;
    int longitud;
    int veces;
    //Leo cuatro palabras
    for(cont=0;cont<4;cont++){
        std::cout<<"palabra: ";
        std::cin >>aux;
        longitud=devuelve_longitud(aux);
        std::cout<<longitud;
        palabras[cont]=(char *) malloc(longitud*sizeof(char));//Resolver
        strcpy(palabras[cont],aux);
    }
    std::cout<<"\nLISTA DE PALABRAS\n";
    for(cont=0;cont<4;cont++){
        printf("%s\n",palabras[cont]);                        
    }
    //ORDENAR POR EL METODO DE LA BURBUJA
    for(veces=1;veces<4;veces++){
       for(cont=0;cont<3;cont++){
           if(strcmp(palabras[cont],palabras[cont+1])<0){
              paux=palabras[cont];
              palabras[cont]=palabras[cont+1];
              palabras[cont+1]=paux;
           }
       }
    }
    
    std::cout<<"\nLISTA DE PALABRAS\n";
    for(cont=0;cont<4;cont++){
        printf("%s\n",palabras[cont]);
    
    }
    std::cin >> salir;    
}
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
int main(){
   struct Amigo{
          int n_amigo;
          float dinero;
   };
   Amigo pepito;//Guardo memoria para un dato de tipo Amigo
   std::cout<<"Dime tu numero, pepito: ";
   std::cin >> pepito.n_amigo;
   std::cout<<"Dime cuanta pasta tienes: ";
   std::cin >> pepito.dinero;   
   //Recupero datos de mi amigo Pepito
   std::cout<<"Ya tengo un amigo que sellama Pepito"; 
   std::cout<<"\nPepito es mi amigo nº"<<pepito.n_amigo;
   std::cout<<"\ny tienes "<<pepito.dinero<<" euro.";
}   
}
