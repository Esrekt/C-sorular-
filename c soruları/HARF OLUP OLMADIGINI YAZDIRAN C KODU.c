#include<stdio.h>

int main()
{
    char harf;
    
    printf("Bir deger girin : ");
    scanf("%c", &harf);
    
    if((harf>='a' && harf<='z') || (harf>='A' && harf<='Z'))
        printf("%c bir harf.", harf);
    
    else
    printf("harf degil");

}
