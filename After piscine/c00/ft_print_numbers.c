void    ft_print_numbers(void)
{
    int     i;
    char    c;
    
    i = 0;
    while (i < 10)
    {
        c = i + '0';
        write (0, &c, 1);
        i++;
    }
}
