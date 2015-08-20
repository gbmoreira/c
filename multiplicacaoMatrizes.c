#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
int linhaM1, linhaM2, colunaM1, colunaM2, elementoM3=0;
int i,j,k;

/*Dimensao da matriz 1*/
printf("Este programa realiza a multiplicacao entre 2 matrizes !!! \n");
printf("Informe a dimensao da M1\n Linha M1:\n");
scanf("%d",&linhaM1);
printf("Coluna M1:\n");
scanf("%d",&colunaM1);

/*Dimensao da matriz 2*/
printf("Informe a dimensao da M2\n Linha M2:\n");
scanf("%d",&linhaM2);
printf("Coluna M2:\n");
scanf("%d",&colunaM2);

/*Verifica se eh possivel a multiplicacao*/
if(colunaM1 != linhaM2){
	printf("Nao eh possivel multiplicar essas duas matrizes.\n");
  	return 0;
}

int M1[linhaM1][colunaM1], M2[linhaM2][colunaM2], M3[colunaM1][linhaM2];

/*Preenchendo a matriz 1*/
printf("Informe os elementos da Matriz 1.\n");
for (i=0;i<linhaM1;i++){

	for(j=0;j<colunaM1;j++){
		printf("Informe o elemento [ %d ] , [ %d ].\n", i,j);		
		scanf("%d", &M1[i][j]);
	}
}

/*Preenchendo a matriz 2*/
printf("Informe os elementos da Matriz 2.\n");
for (i=0;i<linhaM2;i++){

	for(j=0;j<colunaM2;j++){
		printf("Informe o elemento [ %d ] , [ %d ].\n", i,j);		
		scanf("%d", &M2[i][j]);
	}
}


/*Multiplicacao*/
for (i=0;i<linhaM1;i++){

	for(j=0;j<colunaM2;j++){
		elementoM3=0;
		for(k=0;k<colunaM1;k++){
			elementoM3 = elementoM3 + M1[i][k]*M2[k][j];
		}
		M3[i][j] = elementoM3;
		
	}
}

/*Resultado*/
for (i=0;i<linhaM1;i++){

	for(j=0;j<colunaM2;j++){
		printf("%d ", M3[i][j]);		
	}
	printf("\n");
}
return 0;
}
