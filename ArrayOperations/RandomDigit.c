#include <stdio.h>
#include <stdlib.h>

int main()
{   srand(time(NULL));
    int rakam;
    rakam=rand();
    rakam=rakam%10;
    printf("%d",rakam);

    return 0;
}
