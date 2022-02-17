//leia dois valores inteiros A e B. A seguir, 
//se A for maior do que B , imprima "valores aceitos" 
//Caso não, imprima "valores não aceitos"

#include<stdio.h>
      int main (){
      	
int a, b; 
printf("Digite o valor de A: ");
scanf("%d", &a ); 
printf("Digite o valor de B: ");
scanf("%d", &b );

   if(a > b)  //senao 
       printf("Valores aceitos");
	   else printf("Valores nao aceitos "); 
	   //senao  
}
