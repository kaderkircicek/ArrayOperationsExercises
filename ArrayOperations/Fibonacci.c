#include <stdio.h>
#include <stdlib.h>
void Fibonacci(int Fib[],int N)
{
    Fib[0]=0;
    Fib[1]=1;
    for(int i=2 ; i<N ; i++)
    {
        Fib[i]=Fib[i-1]+Fib[i-2];

    }
}

int main()
{  
    
    int N ;
    printf("Fibonacci serisinin terim sayisini giriniz:");
    scanf("%d",&N);
    int dizi[N];
    
    Fibonacci(dizi,N);
    for(int j=0; j<N ; j++)
    {
        printf("%d",dizi[j]);
    }

    return 0;
}
