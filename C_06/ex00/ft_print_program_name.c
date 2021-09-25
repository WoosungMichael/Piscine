/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:44:57 by wookim            #+#    #+#             */
/*   Updated: 2021/09/25 10:14:53 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		i = 0;
		while (argv[0][i])
		{
			ft_putchar(argv[0][i]);
			i++;
		}
		ft_putchar('\n');
	}
}
