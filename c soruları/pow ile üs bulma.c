#include <stdio.h>
#include <math.h>
#include <fenv.h>
int main(){

int c,a,b;

printf("a giriniz:"); scanf("%d",&a);
printf("b giriniz:"); scanf("%d",&b);
c=pow(a,b);
printf("sonuc : %d",c);

}
