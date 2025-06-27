#include <stdio.h>
#include <unistd.h>

int main()
{
  int i = 1 ;
  while( i <= 4)
  {
     int o = 1;
    while( o <= i)
    {
        printf("*");
          o++;
    }
    printf("\n");
    i++;
  }
}