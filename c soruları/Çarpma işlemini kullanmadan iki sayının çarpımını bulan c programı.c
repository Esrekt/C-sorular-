#include <stdio.h>
#include <conio.h>

int main() {

int a,i,b,c=0;
printf("bir sayi giriniz:"); scanf("%d",&a);
printf("bir sayi giriniz:"); scanf("%d",&b);
for(i=1;i<=b;i++)
{
	c=c+a;
}
printf("sonuc : %d",c);



return 0;
}
