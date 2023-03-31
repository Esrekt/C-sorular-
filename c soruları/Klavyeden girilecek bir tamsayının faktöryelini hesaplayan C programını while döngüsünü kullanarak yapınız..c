#include <stdio.h>
 int main() 
{ int sayi, faktoryel = 1; 
printf("Bir sayi giriniz : ");
 scanf("%d",&sayi); 
while(sayi>0)
 { faktoryel *= sayi; sayi --; } 
printf("Faktoryel = %d" ,faktoryel); 
 } 
