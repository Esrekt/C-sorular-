
/*Herhangi bir dizinin i�inde yan yana ayn� say� var ise sadece bir tanesini yazd�ran kodu yaz�n. �rnek: 20 boyutlu bir dizinin elemanlar� {9 9 3 3 3 3 3 6 5 5 0 0 0 0 0 1 1 3 3 3} ise ��kt� a�a��daki �ekilde olmal� */
#include<stdio.h>
int main()
{
    int numbers[20] = {9,9,3,3,3,3,3,6,5,5,0,0,0,0,0,1,1,3,3,3}, i, j;
    int arr2[20], k = 0, k1 = 0;
    int flag = 0;
    for(i = 0; i < 20; i++)
    {
       for(j = 0; j < 20; j++)
       {
           flag = 0;
           if(i != j && numbers[i] == numbers[j])
           {
               for(k1 = 0; k1 < k; k1++)
                   if(arr2[k1] == numbers[j])
                     flag = 1;
               if(flag != 1)
                   arr2[k++] = numbers[j];
           }
       }
    }
    for(i = 0; i < k; i++)
      printf(" %d ",arr2[i]);
    return 0;
}
