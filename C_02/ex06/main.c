#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
    char src1[] = "abef";
    char src2[] = "xyz777777777777";
    char src3[] = "12377";
    char src4[] = "bBbC";
    char src5[] = "AAS";
    char src6[] = "";

    printf("%d", ft_str_is_printable(src1));
    printf("%d", ft_str_is_printable(src2));
    printf("%d", ft_str_is_printable(src3));
    printf("%d", ft_str_is_printable(src4));
    printf("%d", ft_str_is_printable(src5));
    printf("%d", ft_str_is_printable(src6));

    return (0);
}