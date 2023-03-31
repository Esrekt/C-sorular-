#include <stdio.h>
int main(){
	int sayac=0,b=0,k=0,i,sayi;
	for(sayac=1;sayac<=10;sayac++)
	{
		printf("%d. sayiyi giriniz:",sayac); scanf("%d",&sayi);
	
	
	if(sayac==1)
	{
		b=sayi;
		k=sayi;
	}
	else
	{
		if(sayi>=b)
		b=sayi;
		if(sayi<=b)
		k=sayi;
	}
	}
	printf("girilen sayilarin en buyugu %d \n",b);
	printf("girilen sayilarin en kucugu %d \n",k);
	
	printf("sonuc:%d",b-k);
	

}
