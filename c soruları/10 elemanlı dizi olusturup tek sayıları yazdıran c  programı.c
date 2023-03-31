#include <stdio.h>
int main(){
int dizi[10];
int j,i;
for(i=0;i<10;i++)
{
	dizi[i]=2*i+1;

}
for(j=0;j<10;j++)
{
	printf("element %d: %d\n",j,dizi[j]);
}
}
