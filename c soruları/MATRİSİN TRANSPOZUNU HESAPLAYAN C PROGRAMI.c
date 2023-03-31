int main()
{
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Matris sat�r ve s�tunlar�n� girin: ");
    scanf("%d %d", &r, &c);

    // Matrisin elemanlar�n� sakl�yoruz
    printf("\nMatris elemanlar�n� girin:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Eleman girin a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    // Matris g�steriliyor a[][] */
    printf("\nGirilen Matris: \n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c-1)
                printf("\n\n");
        }

    // A matrisinin transpozisyonunu bulma
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    // A matrisinin transpozisyonunu g�r�nt�leme
    printf("\nMatrisin transpozu:\n");
    for(i=0; i<c; ++i)
        for(j=0; j<r; ++j)
        {
            printf("%d  ",transpose[i][j]);
            if(j==r-1)
                printf("\n\n");
        }

    return 0;
}
