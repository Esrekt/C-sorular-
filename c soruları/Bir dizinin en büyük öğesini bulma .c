#include <stdio.h>

int main()
{
    int i, n;
    float arr[100];

    printf("Toplam eleman say�s�n� girin (1 ve 100 aras�nda): ");
    scanf("%d", &n);
    printf("\n");


    for(i = 0; i < n; ++i)
    {
       printf("Say� Girin %d: ", i+1);
       scanf("%f", &arr[i]);
    }

    
    for(i = 1; i < n; ++i)
    {
 // En k���k eleman� bulmak istiyorsan�z < ve > i�aretlerini de�i�tirin
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("En b�y�k eleman = %.2f", arr[0]);

    return 0;
}
