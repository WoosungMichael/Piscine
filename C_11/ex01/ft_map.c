/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:36:24 by wookim            #+#    #+#             */
/*   Updated: 2021/09/29 17:02:02 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*arr;

	arr = (int *)((malloc)(sizeof(int) * length));
	i = -1;
	while (++i < length)
		arr[i] = f(tab[i]);
	return (arr);
}
