/*Çýktý örneði: n = 5 için 
 
 1 2 3 4 5 
 2 3 4 5
 3 4 5
 4 5
 5 
*/
#include <stdio.h>
int main(){
	int n,i,j;
	printf("bir sayi giriniz: "); scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=i;j<=n;j++)
		{
			printf("%d",j);
		}
	}
