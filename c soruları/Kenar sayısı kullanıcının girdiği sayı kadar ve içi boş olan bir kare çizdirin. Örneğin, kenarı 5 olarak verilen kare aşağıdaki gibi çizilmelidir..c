#include <stdio.h>
int main(){
	int i,j,sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		for(j=1;j<=sayi;j++)
		{
			 if(i==1 || i==sayi || j==1 || j==sayi)
        {
            /* Print star for 1st, Nth row and column */
            printf("*");
        }
        else
        {
            printf(" ");
        }
		}
		 printf("\n");
	}
