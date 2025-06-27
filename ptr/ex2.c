void ft_swap(int *a, int *b)
{  
    int temp;
     temp = *a ;
     *a = *b ; 
     *b =temp;
}
#include <stdio.h>
int main()
{
    int x = 5 ;
    int o = 10;
    printf("befor : a = %d, b = %d\n", x , o);
    ft_swap(&x, &o);
    printf("after : a = %d, b = %d\n", x , o);
    return 0;
}