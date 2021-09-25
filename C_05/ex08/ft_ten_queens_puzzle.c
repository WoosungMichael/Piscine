/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:15:39 by wookim            #+#    #+#             */
/*   Updated: 2021/09/22 19:28:36 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_cnt;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check(int j, int n, int g_chess[10])
{
	if (g_chess[j] == g_chess[n])
		return (1);
	else if ((j - n) == (g_chess[j] - g_chess[n]))
		return (1);
	else if ((j - n) == (g_chess[n] - g_chess[j]))
		return (1);
	else
		return (0);
}

void	print_chess(int g_chess[10])
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(g_chess[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

void	dfs(int n, int g_chess[10])
{
	int	i;
	int	j;
	int	flag;

	if (n == 10)
	{
		print_chess(g_chess);
		g_cnt++;
		return ;
	}
	i = -1;
	while (++i < 10)
	{
		flag = 1;
		j = -1;
		while (++j < n)
		{
			g_chess[n] = i;
			if (check(j, n, g_chess))
				flag = 0;
		}
		if (flag)
			dfs(n + 1, g_chess);
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	g_chess[10];

	i = 0;
	g_cnt = 0;
	while (i < 10)
	{
		g_chess[0] = i;
		dfs(1, g_chess);
		i++;
	}
	return (g_cnt);
}
