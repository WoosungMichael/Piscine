#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    char src1[] = "abcdef";
    char src2[] = "xyz777777777777";
    char src3[] = "12377";
    char src4[] = "7b77777777777";
    char src5[] = "~118B";
    char src6[] = "";

    printf("%d", ft_str_is_alpha(src1));
    printf("%d", ft_str_is_alpha(src2));
    printf("%d", ft_str_is_alpha(src3));
    printf("%d", ft_str_is_alpha(src4));
    printf("%d", ft_str_is_alpha(src5));
    printf("%d", ft_str_is_alpha(src6));

    return (0);
}
