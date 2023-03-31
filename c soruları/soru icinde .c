/*4 haneli þifresi olan bir sisteme girmeye çalýþtýðýmýzý varsayalým. Programýmýz 1000'den 9999'a kadar tüm sayýlarý denesin, her denemesinde çýktý versin ve þifreyi bulduðunda yazdýrarak kapansýn.
Þifreyi girdi olarak alabilir veya kodun içinde tanýmlayabilirsiniz. Girdiðimiz her þifreyi bulunmalýdýr.
örnek çýktý þu þekilde:

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

