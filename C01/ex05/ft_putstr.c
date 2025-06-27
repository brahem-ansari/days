#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str != '\0') // مازال ما وصلناش لنهاية السطر
    {
        write(1, str, 1); // نطبع الحرف اللي كيشير ليه str
        str++;            // نمشي للحرف اللي بعدو
    }
}
int main(void)
{
    char message[] = "Hello, 1337 student!\n";

    ft_putstr(message);

    return 0;
}