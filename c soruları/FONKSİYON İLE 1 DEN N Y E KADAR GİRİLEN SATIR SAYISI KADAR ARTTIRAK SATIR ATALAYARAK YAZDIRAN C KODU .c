#include <stdio.h>
int floyd(int n){

int i,j=1,t=1;
 	for(i=1;i<=n;i++)
 	{
 		printf(" %d ",i);
 		if(t==i)
 		{
 			printf("\n");
 			j++;
 			t=t+j;
		 }
	 }}
int main(){
    int n;
printf("satir sayisi giriniz ");
scanf("%d",&n);
floyd(n);
}

