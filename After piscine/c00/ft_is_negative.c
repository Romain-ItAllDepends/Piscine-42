#include <unistd.h>

void    ft_is_negative(int n)
{
    if (n < 0)
        write (0, "N", 1);
    else
        write (0, "P", 1);
}
