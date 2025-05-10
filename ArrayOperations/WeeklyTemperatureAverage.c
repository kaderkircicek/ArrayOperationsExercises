#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float OrtalamaSicaklik (int A[]){
int toplam=0;
for(int i=0 ; i<5 ; i++)
{
    toplam=toplam+A[i];
    return toplam/5.0;
}
}


int main()
{

    srand(time(NULL));
    int A[5];
    for(int i=0; i<5 ;i++)
        {
          A[i]=rand()%11;
          printf("%d'ninci gunun sicakligi %d'dir.\n",i+1,A[i]);
        }

        float ort =OrtalamaSicaklik(A);
        printf("Ortalama sicaklik:%f\n",ort);

}
