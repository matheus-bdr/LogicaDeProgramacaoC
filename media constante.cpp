



#include<stdio.h>
#define A 3.5
#define B 7.5
int main (){

double a, b, x, z;
printf("informe sua massa: ");
  scanf("%lf",&a);
printf("informe a massa do seu amigo: ");
  scanf("%lf",&b);
 //    	x = (a*3.5) + (b*7.5);
//	    z  = x/11;
//printf("a medida ponderada dos pesos %lf: ", z );
printf("A Media ponderada e %lf ", (a*A + b*B)/11);
}
