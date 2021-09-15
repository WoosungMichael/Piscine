/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:51:15 by wookim            #+#    #+#             */
/*   Updated: 2021/09/15 17:52:43 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	flag;
	int	cnt;

	flag = 1;
	cnt = 0;
	while (*str)
	{
		if (('0' > *str || *str > '9'))
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
