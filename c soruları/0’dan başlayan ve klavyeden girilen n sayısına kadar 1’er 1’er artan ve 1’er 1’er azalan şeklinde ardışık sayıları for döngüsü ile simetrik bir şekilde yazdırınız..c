/*Çýktý örneði: n = 4 için
 0 1 2 3 4 3 2 1 0 
*/
#include <stdio.h>
int main(){
	int n,i,j;
	printf("bir sayi giriniz: "); scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf(" %d ",i);
	}
	for(i=n-1;i>=0;i--)
	{
		printf(" %d ",i);
	}	
}
