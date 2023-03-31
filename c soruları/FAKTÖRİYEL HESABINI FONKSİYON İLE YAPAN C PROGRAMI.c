#include <stdio.h>

void fak(int sayi)
{
	int i,fak=1;
	for(i=1;i<=sayi;i++)
	{
		fak=fak*i;
	}
	printf("sonuc:%d",fak);
}



int main(){
int sayi;
printf("bir sayi giriniz: "); scanf("%d",&sayi);	
fak(sayi);
}
