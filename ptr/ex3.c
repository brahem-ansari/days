void ft_div_mod(int a, int b, int *div, int *mod)
{ 
    
    *div = a / b;
    *mod = a % b;
    
}
#include <stdio.h>
int main()
{
    int a = 15;
    int b = 2;
    int div_res;
    int mod_res;
    ft_div_mod(a , b,&div_res,&mod_res);
    printf("l9isma = %d\n",div_res);
    printf("lbaqi = %d\n",mod_res);
}