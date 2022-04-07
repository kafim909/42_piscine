/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 08:47:13 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/05 19:37:50 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wr(int d, int e, int f)
{
	int		loop;
	char	g;
	char	h;

	loop = d;
	g = ',';
	h = ' ';
	if (loop <= 55)
	{
		write(1, &d, 1);
		write(1, &e, 1);
		write(1, &f, 1);
		if (d < 55)
		{
			write(1, &g, 1);
			write(1, &h, 1);
		}
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				wr(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
