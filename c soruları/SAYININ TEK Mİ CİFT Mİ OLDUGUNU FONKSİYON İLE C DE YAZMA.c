#include <stdio.h>
int sa(int sayi1)
{
	if(sayi1%2==0)
	{
		printf(" sayi cifttir");
	}
	else
	printf("tektir");	
}
int main(){
int sayi1;
printf("sayi giriniz:"); scanf("%d",&sayi1);
sa(sayi1);

