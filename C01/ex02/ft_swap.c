void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

    #include <stdio.h>


void ft_swap(int *a, int *b);

int main(void)
{
    int x = 5;
    int y = 9;

    printf("9bl x = %d, y = %d\n", x, y);

    ft_swap(&x, &y); 

    printf("mor : x = %d, y = %d\n", x, y);

    return 0;
}

