#include <stdio.h>
int main(){
	int fak=1,i,sayi;
	printf(" bir sayi giriniz: "); scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		fak=fak*i;
	}
	printf("%d",fak);
	
	
	
}
