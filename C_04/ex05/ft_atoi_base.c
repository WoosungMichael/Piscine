/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 09:38:22 by wookim            #+#    #+#             */
/*   Updated: 2021/09/22 12:42:45 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char c)
{
	if (c == ' ' || c == '\n')
		return (1);
	else if (c == '\t' || c == '\v')
		return (1);
	else if (c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	check_base(char *base)
{
	int	arr[256];
	int	i;

	i = 0;
	while (i < 256)
	{
		arr[i] = 0;
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || arr[(int)base[i]] == 1)
			return (0);
		if (check((int)base[i]))
			return (0);
		arr[(int)base[i]] = 1;
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	find(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	i;
	int	flag;
	int	answer;

	len = check_base(base);
	i = 0;
	flag = 1;
	answer = 0;
	while (check(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
		{
			flag *= -1;
		}
	}
	while (str[i] != '\0' && find(base, str[i]) != -1)
	{
		answer *= len;
		answer += find(base, str[i++]);
	}
	return (answer * flag);
}
