#include<stdio.h>
int verifica(int num);
main(){
	int num,res;
	while(1){
		printf("\nNumero: ==> ");
		scanf("%i",&num);
		res=verifica(num);
		if(res==1) printf("\n\t ==> eh positivo!");
		else if(res==-1) printf("\n\t ==> eh negativo!");
		else printf("\n\t ==> eh zero!");
		}
	}

int verifica(int num){
	if(num>0) return 1;
	else if(num<0) return -1;
	else return 0;
}
