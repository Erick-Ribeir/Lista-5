#include <stdio.h>
#include <stdlib.h>
int fatorial(int num){
	int cont, result=1;
	
	for(cont=1;cont<=num;cont++){
		if(cont != num){
		printf("%d * ",cont);
		}else {
			printf("%d ",cont);
		}
		result=result * cont;	
	}
	return result;
}
int main(){
	int num,res=0;
	printf("Digite um valor: ");
	scanf("%d",&num);
	res = fatorial(num);//vou chama a função p/ calcular o fatorial
	
	printf("\nTotal: ",res);
	return 0;
	}
	
