#include <stdio.h>
int main(){
	int i,b,sayi, min,max,k=1;
	for(i=1;i<=10;i++)
	{
		printf("bir sayi giriniz:"); scanf("%d",&sayi);
		
		if(sayi>max)
		{
			max=sayi;
		}
		
		if(sayi<min)
		{
			min=sayi;
		}
	
	}
		printf("en buyuk:%d en kucuk :%d",max,min);	
	
}
