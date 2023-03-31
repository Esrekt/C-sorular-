#include <stdio.h>
int ters_yaz(int sayi)
{
	int a;
	while(sayi>0)
	{
		a=sayi%10;
	printf("%d",a);
	sayi=sayi/10;
	
	}
	
	
}

int main(){
	int ters= ters_yaz(1254);

}

