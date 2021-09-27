/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:44:23 by wookim            #+#    #+#             */
/*   Updated: 2021/09/27 18:14:54 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tmp;
	int			i;

	tmp = (t_stock_str *)((malloc)(sizeof(t_stock_str) * ac + 1));
	if (!tmp)
		return (0);
	i = 0;
	while (i < ac)
	{
		tmp[i].size = ft_strlen(av[i]);
		tmp[i].str = (char *)((malloc)(sizeof(int) * tmp[i].size + 1));
		ft_strcpy(tmp[i].str, av[i]);
		tmp[i].copy = (char *)((malloc)(sizeof(int) * tmp[i].size + 1));
		ft_strcpy(tmp[i].copy, av[i]);
		i++;
	}
	tmp[i].str = '\0';
	return (tmp);
}
