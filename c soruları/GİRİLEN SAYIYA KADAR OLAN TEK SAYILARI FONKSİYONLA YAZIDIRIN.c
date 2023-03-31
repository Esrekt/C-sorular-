#include <stdio.h>
int sa(int sayi1)
{
	int i;
	for(i=0;i<=sayi1;i++)
	{
		if(i%2==1)
		{
			printf("%d",i);
		}
	}	
}
int main(){
int sayi1;
printf("sayi giriniz:"); scanf("%d",&sayi1);
sa(sayi1);
