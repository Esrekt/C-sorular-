#include <stdio.h>

int main(){
	int i,j;
int toplam[3][3];
	int matris1[3][3]={{2,3,4},{4,6,4},{7,4,2}};
	int matris2[3][3]={{2,1,3},{3,0,4},{1,2,0}};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			toplam[i][j]=matris1[i][j]+matris2[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",toplam[i][j]);
		}
		printf("\n\n");
		
	}
	
	return 0;
	
}
