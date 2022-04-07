/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:05:42 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/17 11:02:20 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	if (s1[i] > s2[i])
		return (1);
	else
		return (-1);
}

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_params(char **str, int index)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (i < index)
	{
		j = i + 1;
		while (j < index)
		{
			if (ft_strcmp(str[i], str[j]) == 1)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	ft_sort_params(argv, argc);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			putchar(argv[i][j]);
			j++;
		}
		putchar('\n');
		i++;
	}
	return (0);
}
