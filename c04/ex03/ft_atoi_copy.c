/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:37:22 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/16 10:33:06 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
			|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int		is_nbr(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int minus;
	int nb;

	i = 0;
	minus = 0;
	while (is_space(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			minus++;	
		}
		i++;
	}
	if (is_nbr(str[i]) == 1)
		nb = str[i] - '0';
	while (is_nbr(str[i + 1]) == 1)
	{
		nb *= 10;
		nb += (str[i + 1] - 48);
		i++;
	}
	if ((minus % 2) == 1)
		nb *= -1;
	return (nb);
}

int main()
{
	printf("%d\n", ft_atoi("   ---**-+-+--1234nb864"));
}
