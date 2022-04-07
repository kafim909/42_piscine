/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:34:00 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/21 15:46:48 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (nb);
}

int		ft_find_next_prime(int nb)
{
	if (nb == 0 || nb == 1 || nb < 0)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
