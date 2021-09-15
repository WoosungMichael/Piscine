/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:53:19 by wookim            #+#    #+#             */
/*   Updated: 2021/09/15 17:54:40 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	flag;
	int	cnt;

	flag = 1;
	cnt = 0;
	while (*str)
	{
		if (('a' > *str || *str > 'z'))
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
