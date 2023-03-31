#include <stdio.h>

int main()
{
    int i, n;
    float arr[100];

    printf("Toplam eleman sayýsýný girin (1 ve 100 arasýnda): ");
    scanf("%d", &n);
    printf("\n");


    for(i = 0; i < n; ++i)
    {
       printf("Sayý Girin %d: ", i+1);
       scanf("%f", &arr[i]);
    }

    
    for(i = 1; i < n; ++i)
    {
 // En küçük elemaný bulmak istiyorsanýz < ve > iþaretlerini deðiþtirin
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("En büyük eleman = %.2f", arr[0]);

    return 0;
}
