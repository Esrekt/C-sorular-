#include <stdio.h>
int main(){
	
	int i,j,satir,bosluksayisi=9,yildizsayisi=1;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=bosluksayisi;j++)
		printf("-");
		
		for(j=1;j<=yildizsayisi;j++)
		printf("*");
		printf("\n");
		yildizsayisi +=2;
		bosluksayisi--;
	} }	
	
