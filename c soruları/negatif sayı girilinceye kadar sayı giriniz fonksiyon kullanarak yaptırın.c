#include <stdio.h>
int poz(int sayi)
{
	while(1)
	{
		printf("bir sayi giriniZ:"); scanf("%d",&sayi);
		if(sayi<0)
		{
			break;
		}
		
	}	
}
int main(){
	
	int sayi;
	
	poz(sayi);
}


