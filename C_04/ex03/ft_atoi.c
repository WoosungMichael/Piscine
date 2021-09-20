/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:50:42 by wookim            #+#    #+#             */
/*   Updated: 2021/09/20 15:05:59 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int i;
    int flag;
    int answer;

    i = 0;
    flag = 1;
    answer = 0;
    while (str[i] <= 32)
        i++;
	while (str[i] == '-' || str[i] == '+')
	{
    	if (str[i] == '-')
	    {
    	    flag *= -1;
        	i++;
    	}
    	else if (str[i] == '+')
        	i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        answer *= 10;
        answer += str[i] - '0';
        i++;
    }
    return (answer * flag);
}
