#include <stdio.h>
int main(){
	
	int aradegisken,dizi[5]={10,5,15,0,25},i=0;
	for(i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(dizi[i]>dizi[j])
			{
				aradegisken=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=aradegisken;
			}
		}
	}
	
	for(i=0;i<5;i++){
		printf(" %d ",dizi[i]);
	}	
	
}
