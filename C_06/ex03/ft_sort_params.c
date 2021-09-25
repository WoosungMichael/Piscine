/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:05:35 by wookim            #+#    #+#             */
/*   Updated: 2021/09/25 10:40:25 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	return (s1[i] - s2[i]);
}

void	argv_sort(char **argv, int argc)
{
	int		i;
	int		j;
	char	*tmp;

	i = argc;
	while (--i > 1)
	{
		j = 0;
		while (++j < i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	argv_sort(argv, argc);
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			ft_putchar(argv[i][j]);
		ft_putchar('\n');
	}
}
