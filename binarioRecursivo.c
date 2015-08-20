#include<stdio.h>
#include<stdlib.h>

void recursao(int n){
  
if (n >=1){
   recursao(n/2);
   printf("%d", n%2);
} 
}

void main(){
  int entrada;
  printf("Informe o numero que deseja obter o binario dele: ");
  scanf("%d", &entrada);
  recursao(entrada); 
  printf("\n");
}
