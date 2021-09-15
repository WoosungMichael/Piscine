#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);


int main()
{
    char src[] = "abcdef";
    char dest[] = "xyz";
    unsigned int x;

    x = ft_strlcpy(dest, src, 3);
    
    printf("%s", dest);
    printf("%d", x);
    printf("%s", src);

    return (0);
}
