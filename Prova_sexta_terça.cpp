//media de provas. prova sexta e terça, caso o aluno tenha tirada
//na media, abaixo de 9.5 o aluno esta reprovado, caso contrario, aprovado 
#include<stdio.h>
#define MEDIA 9.5
int main (){
	float a, b, result;
	
	printf("Digite a nota da prova de sexta feira : ");
    scanf("%f", &a ); 
    printf("Digite o valor da nota da prova de terca: ");
    scanf("%f", &b );
    
    result = (a+b)/2;
    
    printf("A sua media e: %.1f\n", result);
    
    if ( result >= MEDIA )
         printf("parabens, voce esta aprovado!!!!");
    
    else printf("voce esta reprovado.");
    
	 
}
