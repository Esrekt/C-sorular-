#include <stdio.h>
int main(){

  int ters,sayi;
  printf("bir sayi giriniz: ");
  scanf("%d",&sayi);
  while(sayi>0)
  {
  	ters=sayi%10;
  	printf("%d",ters);
  	sayi=sayi/10;
  }



}
