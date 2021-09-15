#include <stdio.h>

void ft_putstr_non_printable(char *str);


int main()
{
    char src[] = "Coucou\ntu vas bien ?";

    ft_putstr_non_printable(src);

    return (0);
}

