#include <stdio.h>
int ft_atoi(char *str);

int main(int argc, char **argv)
{
	int x;
	x = ft_atoi(argv[1]);
	printf("%d", x);
}
