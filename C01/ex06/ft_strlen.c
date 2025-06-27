 int ft_strlen(char *str)
 {
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
 }
 #include <stdio.h>

int ft_strlen(char *str);

int main()
{
    char text[] = "1337_BenGuérir";
    int length = ft_strlen(text);
    printf("Length: %d\n", length); //  Length: 15
    return 0;
}
