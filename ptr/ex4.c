void ft_ultimate_div_mod(int *a, int *b)
{
    if (*b != 0)
    {   
         int temp = *a;
        *a = temp / *b;
        *b = temp % *b;
    }
}
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;
   

    ft_ultimate_div_mod( &a, &b);

    printf("division = %d\n", a);
    printf("modulus = %d\n", b);

    return 0;
}
