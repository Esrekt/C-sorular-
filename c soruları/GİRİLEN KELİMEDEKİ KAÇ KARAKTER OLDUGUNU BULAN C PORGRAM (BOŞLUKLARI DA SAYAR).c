#include <stdio.h>
int main(){
	
	char cumle[100];
	int i=0;
	printf("cumle giriniz: \n");
	gets(cumle);
	while(cumle[i])
	{
		i++;
	}
	printf("cumlen�n karakter sayisi : %d\n",i);
	
	return 0;	
	
}
