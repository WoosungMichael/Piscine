/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:08:09 by wookim            #+#    #+#             */
/*   Updated: 2021/09/27 15:52:05 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	if (min >= max)
		return (0);
	size = max - min;
	arr = (int *)(malloc(sizeof(int) * (size) + 1));
	i = 0;
	while (i < size)
	{
		arr[i++] = min++;
	}
	return (arr);
}
