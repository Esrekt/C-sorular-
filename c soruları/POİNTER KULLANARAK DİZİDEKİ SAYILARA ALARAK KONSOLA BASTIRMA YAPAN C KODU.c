#include <stdio.h>
int main(){
	int arr[100];
	int N;
	int *ptr;
	ptr=arr;
	printf(" dizi kac elemanl� olsun \n");
	scanf("%d",&N);
	printf("elemanlar� giriniz: \n");
	for(int i=0;i<N;i++)
	{
		scanf("%d",ptr);
		ptr++;
		
	}
		ptr=arr; //yeniden yaz�k ��nk� deger olmad�g� i�in adresi yazar bunu yazmazsak//
	printf("degerlerim : \n");
	for(int i=0;i<N;i++)
	{
		printf("%d ",*ptr);
		ptr++;
	}}
