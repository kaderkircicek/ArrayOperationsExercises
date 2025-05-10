#include <stdio.h>
#include <stdlib.h>
void DiziTersCevir(int A[], int boy)
{   for(int i=0 ; i<boy/2 ; i++)
   {
       int temp=A[i];
       A[i]=A[boy-i-1];
       A[boy-i-1]=temp;

    }
}

int main()
{
    int N ;
    printf("Dizinin eleman sayisini giriniz:");
    scanf("%d",&N);
    int dizi[N];
    for(int i=0 ; i<N ; i++)
    {
        dizi[i]=10+rand()%90;
        printf("%d  ",dizi[i]);
    }
    DiziTersCevir(dizi,N);
    printf("\nDizi tersine cevrilmiştir.\n");
    for(int j=0 ; j<N ; j++)
    {
        printf("%d  ",dizi[j]);
    }

    return 0;
}
