#include <stdio.h>

void yerdegistir(int *sayi1,int *sayi2)
{
	 int gecici;
	 gecici=*sayi1;
	 *sayi1=*sayi2;
	 *sayi2=gecici;
	 printf("yeni ilk girilen deger: %d\n",*sayi1);
	 printf("yeni ikinci girilen deger: %d",*sayi2);
}



int main(){
	
	int sayi1,sayi2;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi1);
	printf("bir sayi giriniz:");
	scanf("%d",&sayi2);
	 printf("ilk girilen deger: %d\n",sayi1);
	 printf("ikinci girilen deger: %d\n\n",sayi2);
	yerdegistir(&sayi1,&sayi2);
	
	
	
}
