#include <stdio.h>
ehPar(int num){
	if(num%2==0)
		return 1;
		else
			return 0;
}
int main(){
	int numero;
	
	while(1){
	printf("\nDigite um numero: ");
	scanf("%d",&numero);
	
	if(ehPar(numero))
		printf("Eh par!!",numero);
	else
		printf("NAO eh par!!",numero);
	}
return 0;

	
}


