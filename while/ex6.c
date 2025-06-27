#include <unistd.h>

 void ft_print_comb(void)
 {  
    int i ;
    int k ;
    int j ; 


    i = '0' ;
    while( i <= '7')
    {
        k = i + 1 ;
        while( k <= '8' )
        {
            j = k + 1;
            while (j <= '9')
            {
                write(1,&i,1);
                write(1,&k,1);
                write(1,&j,1);
                if(!(i == '7' && k == '8' && j == '9'))
                {
                    write(1," ,",2);
                }
            
        
       j++; 
       }  
         
    k++;  
    }
     
  i++; 
 }
    
   
 }
int main()
{
     ft_print_comb();
     return 0 ;
}