#include
#include
int main ()
{
        int n,mod=1,x,k,j=0,i=1;
                printf("Sirasiyla n ve x degerini giriniz\n");
                scanf("%d%d",&n,&x);
                k=n;
while(n!=0)
        {
for(i=mod;i<=n;i++)
{
     j++;
                if(j%x==0)
                printf("%d. yumurta kirildi\n",i);
        }
        mod=j%n;
        n--;
        }
        printf("saglam kalan yumurta %d",i);
getch ();
return 0;
}
