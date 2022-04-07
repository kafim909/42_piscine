ft/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 10:03:15 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/08 17:47:45 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		min;
	int		max;

	min = 0;
	max = size - 1;
	while (min != (size / 2))
	{
		ft_swap(&tab[min], &tab[max]);
		min++;
		max--;
	}
}
