#include <stdio.h>
int main(){
	int a,toplam=0,i;
	printf("bir sayi giriniz: "); scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		if(a%i==0)
	     {
	     	toplam=toplam+i;
		 }	
		
	}

	
	if(toplam==a) 
		printf("mukemmel sayidir ");
		else 
		printf("degildir");
}
