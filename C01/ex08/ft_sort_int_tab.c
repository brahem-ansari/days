// mafhmtosh 
void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int temp;

    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            // Swap elements
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;

            // Restart from beginning
            i = 0;
        }
        else
        {
            i++;
        }
    }
}
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
    int arr[] = {5, 2, 9, 1, 3};
    int size = 5;

    ft_sort_int_tab(arr, size);

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}

