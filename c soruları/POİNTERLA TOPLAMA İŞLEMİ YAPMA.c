#include <stdio.h>
int main(){
	
	int sayi1,say2,toplam;
	int *a,*p;
	
	a=&sayi1;
	p=&say2;

	printf("iki sayi giriniz: \n");
	scanf("%d %d",a,p);
	toplam=*a+*p;
	printf("toplam : %d",toplam);
	
	
	
}
