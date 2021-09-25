#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *arr;
	int i;
	int size;

	if (min >= max)
		return ('\0');
	size = max - min;
	arr = (int *)(malloc(sizeof(int) * (size) + 1));
	while (i < size)
	{
		arr[i++] = min++;
	}
	return (arr);
}
