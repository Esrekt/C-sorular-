/*• int dizi[5] = {3,2,6,3,5};
 • int n = 8; 
Çýktý örneði: 
2 6 
.... 
*/
#include <stdio.h>

int main(){
    int dizi[5] = {3, 2, 6, 3, 5};
    int i;
    int n;
    int kontrol = 0;
    printf("Sayý gir aga = ");
    scanf("%d", &n);
    for (size_t i = 0; i < 5; i++)
    {
            if(dizi[i] + dizi[i+1] == n && i < 4)
            {
                printf("%d %d \n",dizi[i], dizi[i+1]);
                kontrol = 1;
            }
            if (kontrol = 0)
            {
                printf("Yok aga");
            }
            
    }
    
}
