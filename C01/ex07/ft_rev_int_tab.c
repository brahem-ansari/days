 void ft_rev_int_tab(int *tab, int size)
 {
    int start = 0;
    int end = size - 1;
    int temp;
     
    while(start < end)
    {
        temp =tab[start]; // katbda mn 0 

        tab[start] = tab[end];// kat7et value d lbdaya f tali 

        tab[end] =  temp; // l9ima lewla d lbadya f tali bash matbdelsh l value

         //katiz b lwel w katrej3 b tali bash yw93 reverse 
        start++;
        end--;
    }
 }
 #include <stdio.h>
 int main()
 {
    int tab[3]= {10,20,30};
    int size =3; 
    ft_rev_int_tab(tab, size); // نعيطو على الدالة
    int i =0;
     while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    return 0;
 }