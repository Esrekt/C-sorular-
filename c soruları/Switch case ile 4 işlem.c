#include <stdio.h>

int main()
{
	
    int islem,sayi1,sayi2,toplama,cikarma,carp,bol;
    printf(" 1. sayi gir: ");
    scanf("%d",&sayi1);
     printf(" 2. sayi gir:");
    scanf("%d",&sayi2);
    
    printf("\n\n1.Toplama\n");
    printf("2.volme\n");
    printf("3.cýkarma\n");
    printf("4.Carma\n");
    
    printf("\nIslemi seciniz:");
    scanf("%d",&islem);
    switch(islem){
    	case 1: 
    	printf("toplama islemi sonucu: %d",sayi1+sayi2);
    	break;
    	case 2:
    	printf("bolme islemi sonucu: %d",sayi1/sayi2);
    	break;
    	case 3:
    		
    	printf("cýkrma islemi sonucu: %d",sayi1-sayi2);
    	break;

