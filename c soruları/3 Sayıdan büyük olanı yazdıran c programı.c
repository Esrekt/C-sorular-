#include <stdio.h>
int main() {
    double n1, n2, n3;
    printf("Sayý1: ");
    scanf("%lf", &n1);
    printf("Sayý2: ");
    scanf("%lf", &n2);
    printf("Sayý3: ");
    scanf("%lf", &n3);
 
    if (n1 >= n2 && n1 >= n3)
        printf("Girilen En Büyük Sayý : %.2lf.", n1);
 
    else if (n2 >= n1 && n2 >= n3)
        printf("Girilen En Büyük Sayý : %.2lf.", n2);
 
    else
        printf("Girilen En Büyük Sayý : %.2lf.", n3);
 
    return 0;
}
