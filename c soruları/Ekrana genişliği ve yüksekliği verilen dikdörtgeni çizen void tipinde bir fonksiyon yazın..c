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
printf("Dikdörtgenin geniþliðini girin");
scanf("%d",&genislik);
printf("Dikdörtgenin yüksekliði girin");
scanf("%d",&yukseklik);
dikdortgen_ciz(genislik,yukseklik);
}

