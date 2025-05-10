#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[7]={1,2,3,5,3,3,9};
    int deger=0;
    int aranan;
    for(int i=0 ; i<7 ; i++)
    { printf("%d ",A[i]);}
    printf("\nLutfen aranan degeri giriniz:");
    scanf("%d",&aranan);
    for(int j=0; j<7 ; j++)
    {
        if(A[j]==aranan)
          {
            printf("%d indeks nolu eleman aranan degere esittir.\n",j);
            deger++;
          }
    }


    printf("%d tane eleman aranan degere esitttir.\n",deger);
    return 0;
}
