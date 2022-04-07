/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:54:00 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/16 09:36:38 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str, int minus, int i)
{
	if (minus == 1)
		write(1, "-", 1);
	while (--i >= 0)
	{
		write(1, &str[i], 1);
	}
}

void	ft_putnbr(int nb)
{
	char		str[256];
	int			i;
	long int	long_nb;
	int			minus;

	long_nb = nb;
	i = 0;
	if (long_nb == 0)
		ft_putstr("0", 0, 1);
	if (long_nb < 0)
	{
		minus = 1;
		long_nb *= -1;
	}
	while (long_nb > 0)
	{
		str[i++] = ((long_nb % 10) + 48);
		long_nb /= 10;
	}
	str[i] = '\0';
	ft_putstr(str, minus, i);
}
