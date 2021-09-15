/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:48:26 by wookim            #+#    #+#             */
/*   Updated: 2021/09/15 17:50:43 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	flag;
	int	cnt;

	flag = 0;
	cnt = 0;
	while (*str)
	{
		if (('a' <= *str && *str <= 'z') || ('A' <= *str && *str <= 'Z'))
		{
			flag = 1;
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
