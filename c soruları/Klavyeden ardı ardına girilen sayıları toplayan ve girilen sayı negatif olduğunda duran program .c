#include <stdio.h>
	int main(void){
    int sayi,toplam=0;
   
   
   while(sayi>=0)
   {
   	printf("bir sayi giriniz:");
   	scanf("%d",&sayi);
   if(sayi>0)
   {
   	toplam=toplam+sayi;
	   }	
   }
   
   printf("toplam: %d",toplam);
}
