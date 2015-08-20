#include <stdio.h>
#include <stdlib.h>

void main(){

int num1, num2, soma;

	printf("Está é a soma Russa\n Informe o primeiro número: \n");
	scanf("%d", &num1);
	printf("Agora escreva o segundo número: \n");
	scanf("%d", &num2);

	while(num1>=1){
		if(num1%2 ==1){
			soma= soma + num2;		
 		}
		num1 = num1/2;
		num2 = num2*2;
	}

	printf("Resultado: %d\n", soma);
}
