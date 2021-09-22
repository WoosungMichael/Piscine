/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 09:46:00 by wookim            #+#    #+#             */
/*   Updated: 2021/09/20 21:23:57 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_flag;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	combination(int arr[10], int index, int n, int value)
{
	int	i;

	if (n == 0)
	{
		if (g_flag)
		{
			write(1, ", ", 2);
		}
		i = 0;
		while (i < index)
		{
			ft_putchar(arr[i] + '0');
			i++;
		}
		g_flag = 1;
	}
	else
	{
		if (value <= 9)
		{
			arr[index] = value;
			combination(arr, index + 1, n - 1, value + 1);
			combination(arr, index, n, value + 1);
		}
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	g_flag = 0;
	combination(arr, 0, n, 0);
}
