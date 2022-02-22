#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(){
	int opcao;
	
	printf("selecione sua opcao:\n1. SOMA\n2. PRODUTO\n3. AREA DO CIRCULO\n4. BASKARA\n5");
	scanf("%d", &opcao);
	switch(opcao){
		
	case(1):
    int a, b , x; 
	printf("Querido usuario, por favor, insira seu numero: ");
	scanf("%d", &a);
	printf("Querido usuario, por favor, insira outro numero: ");
	scanf("%d", &b);
	x = a + b;
	printf("A soma dos seus numeros %d: ", x);
	break;
			
		case(2):
	int a, b , PROD;
	printf("digite aqui seu numero: ");
    scanf("%d", &a );
    printf("digite aqui outro numero: ");
    scanf("%d", &b );
	PROD = a * b;
	printf("Seu resultado final e %d " , PROD);
	break;
		case(3):
  double area, raio;
  printf("Qual o raio: ");
  scanf("%lf", &raio);	
  //area = area X area X PI;
  area = pow(raio,2)*PI;
  printf("sua area e igual a %lf", area );
  break;
		case(4):
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
	break;
		default: printf("número invalido");
	}
