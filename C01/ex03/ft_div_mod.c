void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0) // تأكد باش ما تقسمش على صفر
    {
        *div = a / b;
        *mod = a % b;
    }
}
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;
    int div_result;
    int mod_result;

    ft_div_mod(a, b, &div_result, &mod_result);

    printf("division = %d\n", div_result);
    printf("modulus = %d\n", mod_result);

    return 0;
}
