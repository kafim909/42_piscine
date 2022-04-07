/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 10:03:15 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/07 16:42:10 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int i = 0;

	int tab[6] = {30, 80, 50, 20, 40, 15};
	ft_sort_int_tab(tab, 6);

	while(i< 6)
	{
		printf("%d\n", tab[i]);
		i++;
	}

	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		min;
	int		i;
	int		j;

	min = 0;
	i = 0;
	j = 1;

	while (i <= size - 1)
	{
		if(tab[i] > tab[j])
		{
			ft_swap(&tab[i], &tab[j]);
			j++;
		}
		else
		{
			i++;
		}
	}
}
