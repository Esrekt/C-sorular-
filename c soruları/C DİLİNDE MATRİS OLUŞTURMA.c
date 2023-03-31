#include<stdio.h> 
int main(){
	int a[50][50];
	int i,j,satir,sutun;
	printf("satir sayisi giriniz: "); scanf("%d",&satir);
	printf("sutun sayisi giriniz: "); scanf("%d",&sutun);
	
	printf("\n dizi degeri giriniz: \n"); 
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("\n matris [%d][%d] icin deger:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	 printf("\ndizi %d Satir ve %d Sutundan olusan=matris[%d][%d] cok boyutlu dizi:\n",satir,sutun,i,j);
    for(i=0;i<satir;i++)
  {
    for(j=0;j<sutun;j++)
   {
   printf("%2d",a[i][j]); 
   } 
    printf("\n\n"); 
  }
  
}
