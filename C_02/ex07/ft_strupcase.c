/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:01:22 by wookim            #+#    #+#             */
/*   Updated: 2021/09/15 18:02:23 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (('z' >= *tmp && *tmp >= 'a'))
		{
			*tmp -= 32;
		}
		tmp++;
	}
	return (str);
}
