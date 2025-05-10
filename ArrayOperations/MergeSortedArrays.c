#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void DizileriSirala(int A[],int B[],int C[],int N,int M)
{
    int i=0, j=0,k=0;
    while(i<N && j<M)
    {
      if(A[i]<B[j])
        {
            C[k]=A[i];
            i++;
            k++;
       }

       else
       {
           C[k]=B[j];
            j++;
            k++;
       }

    }

    while (i<N)
    {
        C[k]=A[i];
        i++;
        k++;
    }
     while (j<M)
    {
        C[k]=B[j];
        j++;
        k++;
    }


}



int main()
{   int dizi1[6]={3,4,7,9,32,35};
    int dizi2[8]={2,5,6,11,13,14,22,26};
    int dizi3[14];
    DizileriSirala(dizi1,dizi2,dizi3,6,8);
    for(int i=0 ; i<6 ; i++)
    {
        printf("%d",dizi1[i]);
    }
    printf("\n");
    for(int i=0 ; i<8 ; i++)
    {
        printf("%d",dizi2[i]);
    }
    printf("\n");
    for(int i=0 ; i<14 ; i++)
    {
        printf("%d",dizi3[i]);
    }
    printf("\n");
    return 0;
}
