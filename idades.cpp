#include<stdio.h>
int main(){
	int idade;
	
	printf("informe sua idade: ");
	scanf("%d", &idade);
	
	if(idade<=10 )
	printf("idade de crianca");
	
	else if(idade <= 17)
	printf(" idade de adolecente");
	
	else if (idade<= 50)
	printf(" idade de adulto");
	
	else if(idade <= 100 )
	printf("idade de idoso");
	
	else if(idade<=150 )
	printf("idade de izumbi");
	
	else printf("idade invalida");
}
