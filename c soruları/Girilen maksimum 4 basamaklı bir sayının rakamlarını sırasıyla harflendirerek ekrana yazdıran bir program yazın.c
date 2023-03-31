#include <stdio.h>
int main(){
	
	
	
	int i,a,birler,sayi;
	printf(" maksimum 4 basamaklý bir sayi giriniz: "); scanf("%d",&sayi);
	
	int onlar,yuzler,binler;
	birler=sayi%10;
	printf("birler: %d\n",birler);
	onlar=(sayi/10)%10;
	printf("onlar: %d\n",onlar);	
	yuzler=(sayi/100)%10;//yüzler basamaðýný hesaplar
binler=(sayi/1000)%10;
	printf("yuzler: %d\n",yuzler);
	printf("binler: %d",binler);
}

