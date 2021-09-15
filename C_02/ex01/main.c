#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char src[] = "abcdef";
    char dest[] = "xyz777777777777";
    char *x;

    x = ft_strncpy(dest, src, 5);
    printf("%s", x);

    return (0);
}
