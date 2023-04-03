#include<stdio.h>
int verifica(int num);
main(){
	int num;
	while(1){
		printf("\nNumero: ==> ");
		scanf("%i",&num);
		if(verifica(num)) printf("\n\t ==> eh par!");
		else printf("\n\t ==> eh impar!");
		}
	}

int verifica(int num){
	if(num%2==0) return 1;
	else return 0;
}
