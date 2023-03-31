#include <stdio.h>
int main(){
	
	int us,taban,sonuc=1,i;
	printf("taban giriniz: ");
	scanf("%d",&taban);
	printf("us girininiz:");
	scanf("%d",&us);
	for(i=0;i<us;i++)
	{
		sonuc=sonuc*taban;
	}
	printf("sonuc : %d",sonuc);
	
}
