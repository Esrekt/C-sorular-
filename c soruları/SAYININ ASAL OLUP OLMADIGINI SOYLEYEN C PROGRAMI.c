#include <stdio.h>
int main(){
int kontrol=0,asal,sayi,i;
printf(" asal bir sayi giriniz: "); scanf("%d",&sayi);
for(i=2;i<sayi;i++)
{
	if(sayi%i==0)
	{
		printf(" asal degil asal sayi ");
		kontrol=1;
		break;
	}
	if(kontrol==0)
	{
		printf("girilen sayi asal");
		return 0;
	}
}




}
