/*4 haneli �ifresi olan bir sisteme girmeye �al��t���m�z� varsayal�m. Program�m�z 1000'den 9999'a kadar t�m say�lar� denesin, her denemesinde ��kt� versin ve �ifreyi buldu�unda yazd�rarak kapans�n.
�ifreyi girdi olarak alabilir veya kodun i�inde tan�mlayabilirsiniz. Girdi�imiz her �ifreyi bulunmal�d�r.
�rnek ��kt� �u �ekilde:

1000 deneniyor... degil.
1001 deneniyor... degil.
1002 deneniyor... degil.
1003 deneniyor... degil.

3619 deneniyor... degil.
3620 deneniyor... degil.
3621 deneniyor... sifre dogru, sisteme erisildi.*/ 
#include <stdio.h>
int main(){
	int i;
	for(i=1000;i<=9999;i++)
	{
		printf("%d deneniyor degil\n ",i);
		
		if(i==3210)
		{
			printf("%d sifre dogru sisteme erisildi ",i);
			break;
		}
		
		
	}

