#include <stdio.h>
#include <stdlib.h>


void main(){
int i, j;
int matriz[10][10];

for (i=0;i<10;i++){

	for(j=0;j<10;j++){
		printf("Informe o elemento [ %d ] , [ %d ].\n", i,j);		
		scanf("%d", &matriz[i][j]);
	}
}

for (i=0;i<10;i++){
	for(j=0;j<10;j++){
		printf("%3d ",matriz[j][i]);
	}
	printf("\n");
}
}
