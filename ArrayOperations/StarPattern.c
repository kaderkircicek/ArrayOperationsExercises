#include <stdio.h>
#include <stdlib.h>

int main()
{
      int a[6];
      printf("Degerleri giriniz:\n");
      for(int i=0 ; i<6 ; i++)
    {

        scanf("%d",&a[i]);
    }
      for(int i=0 ; i<6 ; i++)
      {   printf("%d :",a[i]);
          for(int j=0 ; j<a[i] ; j++)
          { printf("*");}
          printf("\n");

      }

return 0;
}
