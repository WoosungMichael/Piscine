/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:00:52 by wookim            #+#    #+#             */
/*   Updated: 2021/09/11 19:00:55 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i != 1 && i != x) && (j == 1 || j == y))
				ft_putchar('-');
			else if ((j != 1 && j != y) && (i == 1 || i == x))
				ft_putchar('|');
			else if ((i == 1 || i == x) && (j == 1 || j == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
