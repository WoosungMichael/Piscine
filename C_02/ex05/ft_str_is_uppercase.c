/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:55:37 by wookim            #+#    #+#             */
/*   Updated: 2021/09/15 17:57:57 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	flag;
	int	cnt;

	flag = 1;
	cnt = 0;
	while (*str)
	{
		if (('A' > *str || *str > 'Z'))
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
