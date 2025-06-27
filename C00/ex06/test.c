#include <unistd.h>
    void ft_print_comb2(void)
    {
       int a = 0;
       int b ;
       char n1, n2, n3, n4;
       while(a <= 98)
       {
         b = a +1;
         while(b <= 99)
         {
            n1 = a /10 + '0';
            n2 = a %10 + '0';
            n3 = b /10 + '0';
            n4 = b %10 + '0';

            write(1,&n1,1);
            write(1,&n2,1);
            write(1," ",1);
            write(1,&n3,1);
            write(1,&n4,1);
            if(!(a == 98 && b== 99))
            write(1,",",2);
            b++;
           }
         a++;
        }
    }
 int main(){
    ft_print_comb2();
    return 0;
 }