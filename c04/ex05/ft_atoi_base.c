/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:22:29 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/25 15:43:53 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valid(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '\t' || base[i] == '\n' || base[i] == '\v'
			|| base[i] == '\f' || base[i] == '\r' || base[i] == ' '
			|| base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int		is_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		get_number_index(char c, char *base)
{
	int i;

	i = 0;
	while (c != base[i])
	{
		i++;
	}
	return (i);
}

int		skip_white_space(char *str)
{
	int i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int number;
	int base_size;

	number = 0;
	sign = 1;
	if (is_valid(base) == 0)
		return (0);
	i = skip_white_space(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	base_size = is_valid(base);
	while (is_in_base(str[i], base))
	{
		number += get_number_index(str[i++], base);
		if (is_in_base(str[i], base))
			number *= base_size;
		else
			break ;
	}
	return (number * sign);
}
