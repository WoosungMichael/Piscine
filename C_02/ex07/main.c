#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
    char src1[] = "abef";
    char src2[] = "xyz777777777777";
    char src3[] = "12377";
    char src4[] = "bBbC";
    char src5[] = "AAS";
    char src6[] = "";

    printf("%s", ft_strupcase(src1));
    printf("%s", ft_strupcase(src2));
    printf("%s", ft_strupcase(src3));
    printf("%s", ft_strupcase(src4));
    printf("%s", ft_strupcase(src5));
    printf("%s", ft_strupcase(src6));

    return (0);
}
