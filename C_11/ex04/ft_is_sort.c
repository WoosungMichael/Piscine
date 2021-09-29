/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 12:51:20 by wookim            #+#    #+#             */
/*   Updated: 2021/09/29 17:02:51 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	flag;
	int	s_flag;

	s_flag = 0;
	while (length-- > 1)
	{
		flag = f(tab[length - 1], tab[length]);
		if (flag < 0)
		{
			if (s_flag == 0)
				s_flag = -1;
			if (s_flag == 1)
				return (0);
			continue ;
		}
		else
		{
			if (s_flag == 0)
				s_flag = 1;
			if (s_flag == -1)
				return (0);
			continue ;
		}
	}
	return (1);
}
