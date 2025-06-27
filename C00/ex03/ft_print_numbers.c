#include <unistd.h>
    void ft_print_numbers(void)
      {
        char numbers = '0';
        while( numbers <= '9' )
        {
            write(1, &numbers, 1);
            numbers++;
        }
      }
                /* int main kadirha ga fash 
                ka testi wash output sheh 
                f l push katpushi ga l part d l write
                */
        int main()
        {
             ft_print_numbers();
             return 0;
        }
       