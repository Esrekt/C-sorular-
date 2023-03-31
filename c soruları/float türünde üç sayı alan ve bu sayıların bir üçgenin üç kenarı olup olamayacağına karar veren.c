#include <stdio.h>

int main(){
    
    int temp,bir,iki,uc;
    printf("birinci sayiyi giriniz:"); 
    scanf("%d",&bir);
    printf("ikinci sayiyi giriniz:"); 
    scanf("%d",&iki);
    printf("ucuncu sayiyi giriniz:"); 
    scanf("%d",&uc);
    if(bir<iki)
    {
    	temp=bir;
    	bir=iki;
    	iki=temp;
	}
    if(bir+iki<uc || bir-iki>uc)
    {
    	printf("ucgen olamaz");
	}
    else
    printf("ucgen olur");
