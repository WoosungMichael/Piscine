#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	int i;
	int len;
	char *str1;
	i = 0;
	len = ft_strlen(src);
	str1 = (char *)malloc(sizeof(char) * len + 1);
	if (str1 == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		str1[i] = src[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
