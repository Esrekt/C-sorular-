#include<stdio.h>
#include<conio.h>
 
int main()
{
      int dizi[8],i,j,t,fark,min,max;
      
      for(i=1;i<9;i++){
            printf("%d. sayiyi giriniz: ",i);
            scanf("%d",&dizi[i]);
		}
	for(i=1;i<9;i++)
	{
		for(j=1;j<9;j++)
		{
			if(dizi[j]<=dizi[i]){
				t=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=t;
			}
		}
	}
	printf("\n siralama :");
	for(i=1;i<9;i++)
	{
		printf("%d",dizi[i]);
		
	}
	
		
	}
