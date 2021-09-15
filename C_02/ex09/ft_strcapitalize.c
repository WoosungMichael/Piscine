/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:28:12 by wookim            #+#    #+#             */
/*   Updated: 2021/09/15 18:33:20 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha_num(char c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
	else if ('0' <= c && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || !(is_alpha_num(str[i - 1])))
		{
			if ('a' <= str[i] && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		else
		{
			if ('A' <= str[i] && str[i] <= 'Z')
			{
				str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
