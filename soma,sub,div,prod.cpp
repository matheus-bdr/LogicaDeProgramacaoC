#include<stdio.h>
int main(){
	double a , b , soma , sub , div, prod;
	printf("QUERIDO USUARIO, INSiRA O SEU NUMERO: ");
	scanf("%lf", &a);
	
	printf("QUERIDO USUARIO, INSiRA OUTRO NUMERO: ");
	scanf("%lf", &b);
	
	soma = a + b;
	printf("o resultado da sua soma e igual a: %lf\n", soma);

	sub = a - b;
	printf("o resultado da sua subtracao e igual a: %lf\n", sub);
	
	div = a / b;
	printf("o resultado da sua divisao e igual a: %lf\n", div);
	
	prod = a * b;
	printf("o resultado da sua multiplicacao e igual a: %lf\n", prod);
	
}
