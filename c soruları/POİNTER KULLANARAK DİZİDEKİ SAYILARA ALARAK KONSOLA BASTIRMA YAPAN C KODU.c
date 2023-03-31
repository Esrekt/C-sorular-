#include <stdio.h>
int main(){
	int arr[100];
	int N;
	int *ptr;
	ptr=arr;
	printf(" dizi kac elemanlý olsun \n");
	scanf("%d",&N);
	printf("elemanlarý giriniz: \n");
	for(int i=0;i<N;i++)
	{
		scanf("%d",ptr);
		ptr++;
		
	}
		ptr=arr; //yeniden yazýk çünkü deger olmadýgý için adresi yazar bunu yazmazsak//
	printf("degerlerim : \n");
	for(int i=0;i<N;i++)
	{
		printf("%d ",*ptr);
		ptr++;
	}}
