#include <stdio.h>
int main(){
	
	int galibiyet=0,yenilgi=0,beraberlik=0;
	int devamkontrolu=1;
	int atilangolsayisi=0,yenilengolsayisi;
	while(devamkontrolu==1)
	{
		printf("takiminizin attigi gol sayisi: ");
		scanf("%d",&atilangolsayisi);
		printf("\n");
		printf("takminizin yedigi gol sayisi");
		scanf("%d",&yenilengolsayisi);
		printf("\n");
		if(atilangolsayisi>yenilengolsayisi){
			galibiyet++;
		}
		else if(yenilengolsayisi>atilangolsayisi)
		{
			yenilgi++;
		}
		else if(atilangolsayisi==yenilengolsayisi)
		{
			beraberlik++;
		}
		else
		{
			printf("beklenmedik bir  sonuc alindi");
			
		}
		
		printf("devam etmek istiyormusunuz:"); 
		scanf("%d",&devamkontrolu);
		printf("\n");
		
		
		
	}
		printf("toplam puaniniz: %d",(galibiyet*3)+beraberlik);
	
} 

