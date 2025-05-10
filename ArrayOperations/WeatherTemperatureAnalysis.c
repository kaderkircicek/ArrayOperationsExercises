#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   int toplam=0;
    int N;
    printf("Onumuzdeki kac gun icin hava durumunu bakmak istersiniz:");
    scanf("%d",&N);
    int A[N];
    for(int i=0; i<N ;i++)
        {
          A[i]=rand()%11;
          printf("%d'ninci gunun sicakligi %d'dir.\n",i+1,A[i]);
          toplam = toplam + A[i];
        }

        float ort=(float)toplam/N;
        printf("%d gun boyunca ortalama sicaklik degeri %f'dir.\n",N,ort) ;

        for(int i=0 ; i<N ; i++)
        {
            if(A[i]<ort)
            printf("%d'ninci gun ortalama sicakligin altindadir.\n",i+1);
            else
            printf("%d'ninci gun ortalama sicakligin ustundedir.\n",i+1);
        }



    return 0;
}
