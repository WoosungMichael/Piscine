/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:59:18 by wookim            #+#    #+#             */
/*   Updated: 2021/09/15 18:00:49 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	flag;
	int	cnt;

	flag = 1;
	cnt = 0;
	while (*str)
	{
		if ((32 > *str || *str > 126))
		{
			flag = 0;
		}
		cnt++;
		str++;
	}
	if (flag || cnt == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
