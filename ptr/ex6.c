int ft_strlen(char *str)
{
    int i = 0 ;
    while( str[i] != '\0')
    {
        i++;
    }
    return i;
}
#include <stdio.h>
int main()
{
    char text[]= "Brahim will be a student";
    int length = ft_strlen(text);
    printf("str length = %d\n",length);
    return 0;
}