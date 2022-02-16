#include<stdio.h>
int main(){
	double a , b , result;
	printf("QUERIDO USUARIO, INSiRA O SEU NUMERO: ");
	scanf("%lf", &a);
	
	printf("QUERIDO USUARIO, INSiRA OUTRO NUMERO: ");
	scanf("%lf", &b);
	
	result = a + b;
	printf("o resultado da sua soma e igual a: %.1lf\n", result);

	result = a - b;
	printf("o resultado da sua subtracao e igual a: %.1lf\n", result);
	
	result = a / b;
	printf("o resultado da sua divisao e igual a: %.1lf\n", result);
	
	result = a * b;
	printf("o resultado da sua multiplicacao e igual a: %.1lf\n", result);
	
}
