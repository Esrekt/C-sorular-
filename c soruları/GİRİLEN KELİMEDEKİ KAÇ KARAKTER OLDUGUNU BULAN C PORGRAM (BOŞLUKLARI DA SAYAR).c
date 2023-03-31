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
	printf("cumlenýn karakter sayisi : %d\n",i);
	
	return 0;	
	
}
