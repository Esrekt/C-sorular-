#include <stdio.h>
int main(){
	
int a,b,c,i,sayac=0;
for(i=100;i<1000;i++)
{
	a=i/100; //yüzler basamaðý
                 b = (i%100)/10; //onlar bas
	c=i%10;//birler bas
	if(a!=b && b!=c && a!=c){
		printf(" %d ",i);
	sayac++;	
	}

	}	
	
printf("\n\nBu kurala uygun %d sayi var" ,sayac); 	
	
}
