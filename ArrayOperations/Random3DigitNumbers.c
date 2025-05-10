#include <stdio.h>
#include <stdlib.h>

int main()
{   srand(time(NULL));
    int basamak3;
    int i=0;
    while(i<10){
    basamak3=rand();
    basamak3=basamak3%900+100;
    printf("%d\n",basamak3);
    i++ ; }

    return 0;
}
