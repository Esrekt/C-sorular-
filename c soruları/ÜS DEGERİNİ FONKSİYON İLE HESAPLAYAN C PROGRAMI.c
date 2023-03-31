#include <stdio.h>

int p(int taban,int us)
{
	int i,a=1;
	for(i=1;i<=us;i++)
	{
		a=taban*a;
	}
	printf("sonuc: %d",a);
}



int main(){
int taban,us;
printf("taban sayi giriniz: "); scanf("%d",&taban);	
printf("us sayi giriniz: "); scanf("%d",&us);	
p(taban,us);
}

