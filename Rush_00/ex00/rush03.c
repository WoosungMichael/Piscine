/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:00:27 by wookim            #+#    #+#             */
/*   Updated: 2021/09/11 19:02:50 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check(int i, int j, int a, int b)
{
	if (i == 0 || i == b - 1)
	{
		if (j == 0)
			ft_putchar('A');
		else if (j == a - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (j == 0 || j == a - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			check(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
