/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:37:22 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/16 10:39:33 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_number_size(char *c)
{
	int i;

	i = 0;
	while (c[i] >= '0' && c[i] <= '9')
		i++;
	return (i);
}

int		is_white_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
			|| c == ' ')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	int		minuses;
	int		size;
	int		number;

	number = 0;
	i = 0;
	minuses = 0;
	while (is_white_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			minuses++;
	}
	size = get_number_size(&str[i]);
	while (size-- > 0)
	{
		number += (str[i++] - 48);
		if (str[i] >= '0' && str[i] <= '9')
			number *= 10;
	}
	if (minuses % 2 != 0)
		number = number * -1;
	return (number);
}
