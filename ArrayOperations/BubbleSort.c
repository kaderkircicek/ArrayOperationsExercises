#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void KabarcikSirala(int A[],int N)
{

    for(int i=0 ; i<N ; i++)
    {
        for(int j=0 ; j<N-1 ; j++)
        {
            if(A[j]>A[j+1])
            {
                int temp =A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main()
{
    int boyut ;
    printf("Dizinin boyutunu giriniz:");
    scanf("%d",&boyut);
    int dizi1[boyut];
    srand(time(NULL));
    printf("\n");
    for(int i=0 ; i<boyut ; i++)
    {
        dizi1[i]=1+rand()%100;
        printf("%d  ",dizi1[i]);
    }
    KabarcikSirala(dizi1,boyut);
    printf("\nSirali Dizi\n");
    for(int i=0 ; i<boyut ; i++)
    {
        printf("%d  ",dizi1[i]);
    }
    return 0;
}
