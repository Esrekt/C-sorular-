
#include <stdio.h>
int change(int sayi,int sayi2)
{
	int temp;
	temp=sayi; //temp dedi�imiz gecici deger tutacak say�lar� degisitirmemiz icin sayi degerini tempe atad�k
	sayi=sayi2; //sayi2 yi sayi yapab�lmek icin atad�k
	sayi2=temp;; //temp sayisi sayi oldugu icin sayi2 ye atamak icin kulland�k 
	printf("1. degismis hali :%d \n",sayi);
	printf("2. degismis hali :%d",sayi2);
}
int main(){
	
int sayi,sayi2;
printf("1. sayi giriniz:"); scanf("%d",&sayi);	
printf("2. sayi giriniz:"); scanf("%d",&sayi2);	
change(sayi,sayi2);	
}
