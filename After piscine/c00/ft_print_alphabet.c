#include <unistd.h>

void    ft_print_alphabet(void)
{
    char    c;
    int     i;
    
    c = 'a';
    i = 0;
    while (i < 26)
    {
        write (0, &c, 1);
        c++;
        i++;
    }
}
