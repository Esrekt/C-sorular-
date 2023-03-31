#include <stdio.h>
int buy(int sayi1,int sayi2)
{
	if(sayi1>sayi2)
	{
		printf("sayi 1 buyuk");
		
	}
	else
	printf("sayi 2 buyuk");
	
	
	
}
int main(){
int sayi1,sayi2;
printf("1. sayi giriniz:"); scanf("%d",&sayi1);
printf("2. sayi giriniz:"); scanf("%d",&sayi2);
buy(sayi1,sayi2);	
	

