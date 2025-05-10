#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dizi[10];
    srand(time(NULL));
    for(int i=0 ; i<10 ; i++)
    {
        dizi[i]=rand()%101;
        printf("%d ",dizi[i]);
    }
    for(int i=0 ; i<10 ; i++)
    {
        for(int j=0 ; j<9 ; j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                int temp=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=temp;
            }
        }
    }
    printf("\nDizinin siralanmis hali:\n");
    for(int i=0 ; i<10 ; i++)
    {
        printf("%d ",dizi[i]);
    }
    printf("\nOnce tek sayilar sonra cift sayilar sirali dizi:\n");
    for(int i=0 ; i<10 ; i++)
    {
        if(dizi[i]%2!=0)
            printf("%d ",dizi[i]);

    }
    for(int i=0 ; i<10 ; i++)
    {
        if(dizi[i]%2==0)
            printf("%d ",dizi[i]);
    }
    return 0;
}
