#include <stdio.h>
int main(){
	int secim,kalan,kenar;
	printf("1-kare 2-daire 3-ucgen: "); scanf("%d",&secim);

	switch(secim)
	{
		case 1:
			printf("karenin kenar giriniz:");
			scanf("%d",&kenar);
			kalan=kenar*kenar;
			
			printf("karenin alani: %d",kalan);
		break;
		case 2:
		int r;
			printf("daire yaricap griniz: "); 
			scanf("%d",&r);
            int dalan;
			dalan=2*3*r;
			printf("daire alani:%d",dalan);
			break;
		case 3:
			int ualan,taban,yuk;
		printf("ucgenin yuksekligi: "); scanf("%d",&yuk);
		printf("ucgen tabani: "); scanf("%d",&taban);
		ualan=(taban*yuk)/2;
		printf("ucgen alani: %d",ualan);
		break;
		default:
			printf("yanlis giris yaptiniz ");
						
	}
	
}


