void ft_ft(int *nbr)
{
 *nbr= 42; 
}
#include <stdio.h>
int main()
{
    int x = 0;
    ft_ft(&x);
    printf("nbr = %d",x);
    return 0;
}
