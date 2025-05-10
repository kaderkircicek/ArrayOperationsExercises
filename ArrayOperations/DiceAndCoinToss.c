#include <stdio.h>
#include <stdlib.h>

int main()

{
    srand(time(NULL));
    int zar1,zar2,para;

for (int i=1 ; i<=6 ; i++){
    zar1=1+rand()%6;
    zar2=1+rand()%6;
    printf("[%d %d]\n",zar1,zar2);
}
    printf("\n\n\nParanizin yuzu:");
    para=rand()%2;
    if(para)
        printf(" Tura");
    else
        printf(" Yazi");
    
    return 0;
}
