#include <stdio.h>
#include <stdlib.h>

int potencia(int base,int exp){
	int pot=1, cont;

	for(cont=1;cont<=exp;cont++){
		pot=pot *base;
	}
	return pot;
}int main (){
	int base,exp,res;
	
	printf("Digite o valor da base: ");
	scanf("%d",&base);
	printf("Digite o valor do expoente: ");
	scanf("%d",&exp);
	res=potencia(base,exp);
	printf("Resultado= %d",res);
	
	return 0;
}
