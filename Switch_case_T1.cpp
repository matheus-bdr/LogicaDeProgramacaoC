#include<stdio.h>
int main(){
	int idade;
	
	printf("informe sua idade: ");
	scanf("%d", &idade);
		
	switch (idade){
		case 0 ... 10: printf("crianca");break;
		case 11 ... 18: printf("crianca");break;
		case 19 ... 60: printf("crianca");break;
		case 61 ... 100: printf("crianca");break;
		default: printf("idade invalida"); 
	}
}
