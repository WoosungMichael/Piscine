/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:44:31 by wookim            #+#    #+#             */
/*   Updated: 2021/09/20 15:11:21 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_base(int n, char *base, int len)
{
	if(n >= len)
		print_base(n/len, base, len);
	ft_putchar(base[n % len]);
}

int	check_base(char *base)
{
	int arr[256];
	int i;

	i = 0;
	while (i < 256)
	{
		arr[i] = 0;
		i++;
	}
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || arr[base[i]] == 1)
			return (0);
		arr[base[i]] = 1;
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void ft_putnbr_base(int nbr, char *base)
{
	int len;
	int tmp;

	len = check_base(base);
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		nbr *= -1;
		print_base(nbr / len, base, len);
		ft_putchar(base[nbr%len]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	print_base(nbr, base, len);
}

int ft_atoi(char *str, char *base)
{
	int i;
	int flag;
	int answer;
	int len;

	i = 0;
	flag = 1;
	answer = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		flag *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		answer *= 10;
		answer += str[i] - '0';
		i++;
	}
	len = check_base(base);
	return (answer * flag);
}
