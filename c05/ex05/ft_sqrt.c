/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:10:08 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/21 15:41:41 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 2;
	if (nb == 1)
		return (1);
	if (nb > 2147483600 || nb < 0)
		return (0);
	while ((i * i) <= nb)
	{
		if (nb / i == i)
		{
			if (nb % i != 0)
				return (0);
			else
				return (i);
		}
		else
			i++;
	}
	return (0);
}
