#include<stdio.h>
#define VALORESPOSITIV
int main (){
	int b, a, c, d;
	
	printf("INSIRA O VALOR DE A: ");
	   scanf("%d", &a);
	
	printf("INSIRA O VALOR DE B: ");
	   scanf("%d", &b);
	
	printf("INSIRA O VALOR DE C: ");
	   scanf("%d", &c);
	
	printf("INSIRA O VALOR DE D: ");
	   scanf("%d", &d);
	   
	   /*cond1 = (b > c);
	   cond2 = (b > c);
	   cond3 = (d > a);
	   cond4 = (c+d > a+b)
	   cond5 = c > 0
	   cond6 = d > 0*/
	   
 	   if (b > c && b > c && d > a && (c+d > a+b) && c > 0 && d > 0 && a%2!=0  )
 	   printf("valores aceitos");
 	   else printf("valores nao aceitos.");
 }
	
	
