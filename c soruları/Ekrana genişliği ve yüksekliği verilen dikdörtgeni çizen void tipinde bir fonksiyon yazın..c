#include <stdio.h>
void dikdortgen_ciz(int genislik, int yukseklik)
{
int i,j;

for(i=0;i<yukseklik;i++)
{
	for(j=0;j<genislik;j++)
	{
		printf("*");
		
	}
	printf("\n");
}



}
	

int main()
{
int genislik,yukseklik;
printf("Dikd�rtgenin geni�li�ini girin");
scanf("%d",&genislik);
printf("Dikd�rtgenin y�ksekli�i girin");
scanf("%d",&yukseklik);
dikdortgen_ciz(genislik,yukseklik);
}

