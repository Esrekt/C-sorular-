/*bir sayi giriniz: 5

1
12
123
1234
12345
*/
#include <stdio.h>
int main(){
	int n,i,j,k;
	printf("bir sayi giriniz: "); scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		
		}
	}
