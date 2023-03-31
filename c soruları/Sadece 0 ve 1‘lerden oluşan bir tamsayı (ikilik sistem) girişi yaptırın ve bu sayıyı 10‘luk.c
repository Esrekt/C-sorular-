#include <stdio.h>

int main(){
    int sayi,temp,i=1,ikilik[100];

    printf("Sayi Giriniz: ");
    scanf("%d",&sayi);

    temp = sayi;
    while(temp != 0){
        ikilik[i]= temp % 2;
        temp = temp / 2;
        i++;
    }

    printf("%d sayisinin ikilik sayi sisteminde karsiligi : ", sayi);
    for(int j = i-1 ; j>0 ; j--)   
        printf("%d",ikilik[j]);

}
