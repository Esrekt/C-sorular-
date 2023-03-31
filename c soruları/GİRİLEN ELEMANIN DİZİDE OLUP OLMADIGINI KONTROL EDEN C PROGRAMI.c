#include <stdio.h>
int main(){

int dizi[]={44,1,4,2,8,34,6,3,5,68};
int i,sayi,bulundu=0;
int index;
printf(" aramak istediginiz sayiyi giriniz: "); scanf("%d",&sayi);


for(i=0;i<=9;i++){
	if(dizi[i==sayi])
	bulundu=1;
	
	break;
}
if(bulundu==1)
printf("%d sayisi dizisinde bulundu",sayi);
else
printf("%d sayisi dizide yok");




}

