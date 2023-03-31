#include <stdio.h>
int muk(int sayi)
{
	int i,toplam=0;
	for(i=1;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			toplam=toplam+i;
		}
	}
	if(sayi==toplam)
	{
		printf("muk");
		
	}
	else
	printf("degil");
}
int main(){
int sayi;
printf("bir sayi giriniz:"); scanf("%d",&sayi);
muk(sayi);
