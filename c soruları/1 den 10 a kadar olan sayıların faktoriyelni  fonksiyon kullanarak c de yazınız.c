#include <stdio.h>
int fak(int sayi)
{
     	int i;
		 int b=1;
	for(i=1;i<=sayi;i++)
	{
		
		b=b*i;
	}
	return b;
}
int main(){
	
	int a,b,i,sayi;
	for(i=1;i<=10;i++)
	{
	printf(" %d sayının fakt: %d\n",i,fak(i));
		
	}
}

