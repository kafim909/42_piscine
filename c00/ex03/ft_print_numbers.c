/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:04:17 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/04 14:34:42 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char a;
	char b;

	a = 48;
	b = 57;
	while (a <= b)
	{
		write(1, &a, 1);
		a++;
	}
}
