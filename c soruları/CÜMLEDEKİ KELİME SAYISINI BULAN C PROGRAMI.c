#include <stdio.h>
int main(){
	
	int i=0;
	char cumle[100];
	int sayac=0;
	printf(" bir c�mle giriniz: \n"); 
	gets(cumle);
	while(cumle[i])
	{
		if(cumle[i]==32) //burada 32 dedik cunku bo�lu�un ascii tablosunda kar��l��� decimal olarak 32 dir//
		{
			sayac++;
		}
		i++;
	}
	printf("girilen cumledeki kelime sayisi : %d\n",sayac+1);
		
	return 0;
	
}
