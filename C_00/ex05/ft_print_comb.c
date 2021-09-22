/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 09:32:18 by wookim            #+#    #+#             */
/*   Updated: 2021/09/20 10:29:35 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0' - 1;
	while (++x <= '7')
	{
		y = x;
		while (++y <= '8')
		{
			z = y;
			while (++z <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (x != '7' || y != '8' || z != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
