/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:27:25 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/24 09:38:01 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char c, char *sep)
{
	int i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (0);
		i++;
	}
	return (1);
}

int		ft_cnt_wrd(char *str, char *charset)
{
	int i;
	int j;
	int count;
	int nb;

	i = 0;
	j = 0;
	count = 0;
	while (str[i++])
	{
		nb = 0;
		if (!(is_sep(str[i], charset)))
			nb = 1;
		if (nb == 0)
			j++;
		if (nb == 1 && j != 0)
		{
			count++;
			j = 0;
		}
	}
	return (count + 2);
}

char	*custom_dup(char *src, int i, int j)
{
	char	*str;
	int		k;

	k = 0;
	str = malloc(sizeof(str) * (i - j + 2));
	while (j < i)
	{
		str[k] = src[j];
		k++;
		j++;
	}
	str[k] = '\0';
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	char	**full_tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	full_tab = NULL;
	full_tab = malloc(sizeof(char**) * ft_cnt_wrd(str, charset));
	while (str[i])
	{
		if (is_sep(str[i], charset))
		{
			j = i;
			while (is_sep(str[i], charset) && str[i])
				i++;
			full_tab[k] = custom_dup(str, i, j);
			k++;
		}
		if (str[i] != 0)
			i++;
	}
	full_tab[k] = 0;
	return (full_tab);
}
