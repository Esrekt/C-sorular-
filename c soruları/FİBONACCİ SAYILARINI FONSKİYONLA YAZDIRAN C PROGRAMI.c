#include <stdio.h>
int fib(int sayi1)
{
	int ilk=0;
	int ikinci=1;
	int sonraki;
	int i;
	printf("uretilecek fib sayilari: ");
	for(i=0;i<sayi1;i++)
	{
		if(i<=1)
		{
			sonraki=i;
		}
		else
		{
			sonraki=ilk+ikinci;
			ilk=ikinci;
			ikinci=sonraki;
		}
		printf(" %d ",sonraki);
	}
}
int main(){
int sayi1;
printf("sayi giriniz:"); scanf("%d",&sayi1);
fib(sayi1);	

