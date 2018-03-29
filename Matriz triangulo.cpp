#include <stdio.h>
#define max 4

int main(){
	
	int mat  [max][max];
	int lin,col;
	
	
	for (lin=0; lin<max; lin++)	
		for (col=0; col<max; col++){
		printf ("Digite o valor da posicao [%d][%d] da matriz 1: ",lin,col);
		scanf ("%d",&mat[lin][col]);
	
}
for (lin=0; lin<max; lin++){
 	for (col=0; col<max; col++){
 		if (lin>col){
 		
		 printf ("\t %d \t ",mat[lin][col]);
	}
 	}
printf ("\n");
		
}
}
