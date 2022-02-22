#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(){
	int opcao;
	int i;
	
	for(i=0; 1<4;i++){
	
	
	printf("\nselecione sua opcao:\n1. SOMA\n2. PRODUTO\n3. AREA DO CIRCULO\n4. BASKARA\n");
	scanf("%d", &opcao);
	switch(opcao){
		
	case(1):
    int a, b , x; 
	printf("Querido usuario, por favor, insira seu numero: ");
	scanf("%d", &a);
	printf("Querido usuario, por favor, insira outro numero: ");
	scanf("%d", &b);
	x = a + b;
	printf("A soma dos seus numeros %d:\n ", x);
	break;
			
		case(2):
	int n1, n2 , PROD;
	printf("digite aqui seu numero: ");
    scanf("%d", &n1 );
    printf("digite aqui outro numero: ");
    scanf("%d", &n2 );
	PROD = n1 * n2;
	printf("Seu resultado final e %d\n  " , PROD);
	break;
		case(3):
  double area, raio;
  printf("Qual o raio: ");
  scanf("%lf", &raio);	
  //area = area X area X PI;
  area = pow(raio,2)*PI;
  printf("sua area e igual a %lf\n ", area );
  break;
		case(4):
  double d1, d2, d3, delta, xumalinha,xduaslinha;
  printf("DIGITE O VALOR DE A: ");
  scanf("%lf", &d1);
  printf("DIGITE O VALOR DE B: ");
  scanf("%lf", &d2);
  printf("DIGITE O VALOR DE C: ");
  scanf("%lf", &d3);
  delta = pow(d2,2) - 4*d1*d3;
  xumalinha = (-d2 + sqrt(delta))/2*d1;
  xduaslinha = (-d2 - sqrt(delta))/2*d1;
  if(delta>0){
  printf("o resultado da sua equacao de sengundo grau e, X': %.1lf\n ", xumalinha);
  printf("e a segunda variavel, X'' e  %.1lf: ",xduaslinha );}
  else printf("por delta dar um valor menor ou igual a 0, a equaçao nao tem raizes reais. o valor do seu delta e: %.1lf\n ", delta);
	break;
		default: printf("número invalido\n ");
	}
}
}
