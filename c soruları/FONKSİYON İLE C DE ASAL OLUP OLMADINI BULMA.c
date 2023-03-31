#include <stdio.h>
int asal(int sayi)
{
int i,sayac=0;
for(i=2;i<sayi;i++)
{
	if(sayi%i==0)
	{
		sayac++;
	}
	
}
if(sayac==0)
	{
		printf("asal sayidir");
		
	}
	else
	printf("degildir");

}
