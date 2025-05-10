#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float OrtalamaSicaklik (int A[], int N){
int toplam=0;
for(int i=0 ; i<N ; i++)
{
    toplam=toplam+A[i];
}
    return (float)toplam/N;

}


int main()
{

    srand(time(NULL));
    int N;
    printf("Kac gunluk hava durumuna bakmak istediginizi giriniz:");
    scanf("%d",&N);
    int A[N];
    for(int i=0; i<N ;i++)
        {
          A[i]=rand()%11;
          printf("%d'ninci gunun sicakligi %d'dir.\n",i+1,A[i]);
        }

        float ort =OrtalamaSicaklik(A,N);
        printf("Ortalama sicaklik:%f\n",ort);

}
