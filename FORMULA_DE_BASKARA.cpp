#include<stdio.h>
#include<math.h>
int main (){
	 double a, b, c, delta, xumalinha,xduaslinha;
	   printf("DIGITE O VALOR DE A: ");
	   scanf("%lf", &a);
	   
	       printf("DIGITE O VALOR DE B: ");
	       scanf("%lf", &b);
	       
	           printf("DIGITE O VALOR DE C: ");
	           scanf("%lf", &c);
	           
	           delta = pow(b,2) - 4*a*c;
	           xumalinha = (-b + sqrt(delta))/2*a;
	           xduaslinha = (-b - sqrt(delta))/2*a;
	           if(delta>0){
	           printf("o resultado da sua equacao de sengundo grau e, X': %.1lf\n ", xumalinha);
	           printf("e a segunda variavel, X'' e  %.1lf: ",xduaslinha );}
	           else printf("por delta dar um valor menor que 0, a equaçao nao tem raizes reais. o valor do seu delta e: %.1lf", delta);
	           
	           
}
