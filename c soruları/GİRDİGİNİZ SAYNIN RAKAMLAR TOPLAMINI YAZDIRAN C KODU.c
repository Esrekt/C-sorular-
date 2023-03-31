#include <stdio.h>
int main(){
int toplam=0,rakam,i,sayi;
printf("sayi giriniz: "); scanf("%d",&sayi);
for(i=0;i<sayi;i++)
{
	rakam=sayi%10;
	toplam=toplam+rakam;
	sayi=sayi/10;
	
 } 
printf(" sayinin rakamlar toplami: %d",toplam);






}
