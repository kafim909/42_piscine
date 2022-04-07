/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:08:27 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/25 15:21:45 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ib_ci(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (c ==  str[i])
		{
			return(i);
		}
		i++;
	}
	return (0);
}

int		len(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int		ft_error_check(char *base)
{
	int i;
	int j;

	i = 0;
	if (len(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		base_power(int index_base, int base_len, int str_len)
{
	int i;

	i = str_len - 1;
	while (i > 1)
	{
		base_len *= base_len;
		i--;
	//	printf("%d\n ici", base_len);

	}
	printf("%d  %d  %d \n", index_base, base_len, (index_base * base_len));
	return (index_base * base_len);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int minus;
	int nb;

	nb = 0;
	i = 0;
	minus = 1;
	if (!(ft_error_check(base)))
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' 
			|| str[i] == '\f' || str[i] == '\r'|| str[i] == ' ' 
			|| str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	if (!(ib_ci(str[i], base)))
		return (0);
	while (ib_ci(str[i], base) && str[i])
	{
		nb += base_power(ib_ci(str[i], base),len(base), len(str));
//		printf("%d\n", nb);
		i++;
	}
	return (nb * minus);
}

int main()
{
	printf("%d\n", ft_atoi_base("DC", "0123456789ABCDEF"));
}
