#include <stdio.h>
#define max 3

int main(){
	
	int mat  [max][max];
	int mat2 [max][max];
	int mat3 [max][max];
	int lin,col;
	int soma;
	
	for (lin=0; lin<max; lin++)	
		for (col=0; col<max; col++){
		printf ("Digite o valor da posicao [%d][%d] da matriz 1: 
		",lin,col);
		scanf ("%d",&mat[lin][col]);
		printf ("Digite o valor da posicao [%d][%d] da matriz 2: ",lin,col);
		scanf ("%d",&mat2[lin][col]);
		mat3[lin][col] = mat[lin][col] + mat2[lin][col];
		
}
 for (lin=0; lin<max; lin++){

 	for (col=0; col<max; col++){
 		printf ("\t %d \t ",mat3[lin][col]);
 	}
printf ("\n");
		
}
}
