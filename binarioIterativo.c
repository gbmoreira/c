#include <stdio.h>
#include <stdlib.h>

void main(){

int entrada, binario =0, mult=1;

	printf("Informe um numero em base decimal para ser convertido para binario:");
	scanf("%d", &entrada);
	
	while(entrada>=1){
		binario = binario + (entrada%2)*mult;
		entrada = entrada/2;		
		mult = mult*10;		
	}

	printf("%d\n", binario);
}
