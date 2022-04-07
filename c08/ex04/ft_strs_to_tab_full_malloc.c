/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 06:41:24 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/22 08:23:35 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] < '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *str;
	int i;

	str = malloc(sizeof(*str) * 255);
	while (src[i] != '\0')
	{
		str[i] = src [i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *struct_tab;
	int i;
	
	i = 0;
/*	*av = malloc(sizeof(*av[ac]));
	if (*av == NULL)
		return(*av);
	while (i < ac)
	{
		av[i] = ft_strdup(av[i]);
		i++;
	} 
	i = 0; */
	struct_tab = malloc(sizeof(struct_tab[ac + 1]));
	while (i < ac)
	{
		struct_tab[i].size = ft_strlen(av[i]);
		struct_tab[i].str -> av[i];
		struct_tab[i].copy -> ft_strdup(av[i]);
	}
	free(*av);
}





int		(int argc, char **argv)
{
	
