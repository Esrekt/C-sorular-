#include <stdio.h>
int main(){
	
	int buyuk,kucuk;
	char c;
	printf("bir harf giriniz:"); scanf("%c",&c);
	buyuk=(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
    kucuk=(c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U');

 if(buyuk || kucuk )
 printf("%c unlu harf",c);
 else
 printf("sesli degil");

}
