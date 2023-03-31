#include <stdio.h>
int main(){
	int b;
	int adet=0;
	char a,metin[100];
	printf("cumle giriniz: "); gets(metin);
    printf("karakter giriniz : "); scanf("%c",&a);
    int i;
    for(i=0;metin[i]!='\0';i++)
    {
    	if(metin[i]==a)
    	adet++;
	}
	printf("%c harfinden %d adet var",a,adet);
		
}

