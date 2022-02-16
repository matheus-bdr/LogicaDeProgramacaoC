#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main(){
	double area, raio;
	printf("Qual o raio: ");
	scanf("%lf", &raio);
	
	//area = area X area X PI;
	area = pow(raio,2)*PI;
	
printf("sua area e igual a %lf", area );
}

