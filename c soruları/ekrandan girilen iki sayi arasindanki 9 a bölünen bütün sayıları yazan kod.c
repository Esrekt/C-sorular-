#include <stdio.h>
int main(){
	
int i,sayi1,sayi2;
printf("bir sayi giriniz: "); scanf("%d",&sayi1);
printf("bir sayi giriniz: "); scanf("%d",&sayi2);	
	if(sayi1>sayi2)
	{
		printf("sayi1 sayi2 den kucuk olmalidir");
		
	}
	else
	{
		for(i=sayi1;i<=sayi2;i++)
	
	{
		if(i%9==0)
		{
			printf("%d\n",i);
		}
		
		}
	}
		
		
	}

