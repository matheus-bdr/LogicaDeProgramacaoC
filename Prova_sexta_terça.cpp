//media de provas. prova sexta e terça, caso o aluno tenha tirada
//na media, abaixo de 9.5 o aluno esta reprovado, caso contrario, aprovado 
#include<stdio.h>
#define MEDIA 9.5
int main (){
	float a, b, result;
	int github, freq;
	
	printf("Digite a nota da prova de sexta feira : ");
      scanf("%f", &a ); 
    
    printf("Digite o valor da nota da prova de terca: ");
       scanf("%f", &b );
    
	printf("Digite a sua frequencia: ");
       scanf("%d", &freq );
     
    printf("caso tenha github digite um, caso nao tenha 0: ");
        scanf("%d", &github );
        
    result = (a+b)/2;
    
    printf("A sua media e: %.1f\n", result);
    
    if ( result >= MEDIA && freq >= 80 && github == 1  )
         printf("parabens, voce esta aprovado!!!!");
    
    else printf("voce esta reprovado.");
    
	 
}
