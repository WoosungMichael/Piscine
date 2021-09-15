/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:39:09 by wookim            #+#    #+#             */
/*   Updated: 2021/09/15 17:40:23 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);


int	main(void)
{
	char src[] = "abcdef";
    char dest[] = "xyz";
    char *x;

    x = ft_strcpy(dest, src);
    printf("%s", x);

    return (0);
}
