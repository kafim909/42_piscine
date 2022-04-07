/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 06:41:24 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/24 11:38:39 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(src) + 2));
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *struct_tab;
	int			i;

	i = 0;
	struct_tab = malloc(sizeof(*struct_tab) * (ac + 2));
	if (struct_tab == NULL)
		return (struct_tab);
	while (i < ac)
	{
		struct_tab[i].size = ft_strlen(av[i]);
		struct_tab[i].str = av[i];
		struct_tab[i].copy = ft_strdup(struct_tab[i].str);
		i++;
	}
	struct_tab[i].str = 0;
	return (struct_tab);
}
