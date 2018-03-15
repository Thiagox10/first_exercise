#include<stdio.h>

int multpos(int x,int y){

if (y == 0)
	return (x);
else
	return (x + multpos(x,y-1));
}

int multneg(int x,int y){

if (y == 1)

		return (x); 
else 
		return (x + multneg(x,y+1));

}

int main(){
	int n1,n2;
		printf ("Digite numero:\n");
	scanf ("%d",&n1);
		printf ("Digite o segundo valor;\n");
	scanf ("%d",&n2);
		
		if (n1<0||n2<0) 
			printf ("Resultado: %d",multneg(n1,n2));
		else {
		
				if (n1==0||n2==0)
					return 0;
				else 
					printf ("Resultado: %d",multpos(n1,n2));
		}
				
	return 0;
}

