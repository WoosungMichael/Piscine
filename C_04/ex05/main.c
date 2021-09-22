#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main()
{
	char str[] = "-++--cbbca27812gcdhb";
    char base[] = "abc";
	printf("%d\n", ft_atoi_base(str, base));
	return (0);
}
