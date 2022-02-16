#include<stdio.h>
int main (){
	int a, b , c, media;
	printf("INFORME A NOTA DO ALUNO 1: ");
	scanf("%d", &a );
	printf("INFORME A NOTA DO ALUNO 2: ");
	scanf("%d", &b );
	printf("INFORME A NOTA DO ALUNO 3: ");
	scanf("%d", &c );
	media = (a*2 + b*3 + c*5)/10; 
	printf("a media dos alundo e %d", media );
}
