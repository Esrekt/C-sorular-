#include <stdio.h>
int top(int sayi)
{
	int i,topl=0;
	for(i=1;i<=sayi;i++)
	{
		topl=topl+i;
	}
	printf(" toplam : %d",topl);
}
int main(){
	
int sayi;
printf("bir sayi giriniz:"); scanf("%d",&sayi);	
top(sayi);	
}

