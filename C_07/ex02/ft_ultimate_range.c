/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:07:46 by wookim            #+#    #+#             */
/*   Updated: 2021/09/27 15:35:49 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*tmp;

	if (min >= max)
		return (0);
	size = max - min;
	*range = (int *)(malloc(sizeof(int) * size + 1));
	if (!*range)
		return (-1);
	tmp = *range;
	while (min < max)
	{
		*tmp = min;
		min++;
		tmp++;
	}
	return (size);
}
