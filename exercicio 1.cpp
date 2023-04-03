#include<stdio.h>
#include<ctype.h>

float media(float n1,float n2,float n3,char tipo);

main(){
	float n1,n2,n3;
	char tipo;
	while(1){
		printf("\nInforme as notas: ");
		scanf("%f%f%f",&n1,&n2,&n3);
		printf("\nInforme o tipo de media: \nA - ARITMETICA\nP - PONDERADA\nH - HARMONICA ==> ");
		fflush(stdin);
		scanf("%c",&tipo);
		tipo = toupper(tipo);
		printf("\n\t ==> MEDIA CALCULADA: %.2f",media(n1,n2,n3,tipo));
	}
}

float media(float n1,float n2,float n3,char tipo){
	if(tipo=='A'){
		return (n1+n2+n3)/3;
	}else if(tipo=='P'){
		return (n1*5+n2*3+n3*2)/10;
	}else{
		printf("\n\t ==> nao fiz");
	}
	
}
