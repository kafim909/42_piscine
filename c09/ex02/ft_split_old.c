/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:27:25 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/23 09:33:27 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char	sep_set(char *str)
{
	int i;
	int bol;
	char sep;

	bol = 0;
	sep = 1;

	while (bol == 0)
	{
		i = 0;
		bol = 1;
		sep++;
		while (str[i] != '\0')
		{
			if (str[i] == sep)
				bol = 0;
			i++;
		}
	}
	return (sep);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')	
		i++;
	return (i + 1);
}

int		comp_replace(char *str, char *charset, char sep)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (charset[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			printf("%d ", j);	
			if (str[j] == charset[i])
			{
				str[j] = sep;
				count++;
				printf("la");
			}
			j++;
		}
		i++;
	}
	return (count);
}

char	**real_split(char ** final_tab, char *str, char sep)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i] != sep && str[i] != '\0')
		{
			final_tab[j][k] = str[i];
			i++;
			k++;
		}
		if (str[i + 1] != sep )
		{
			final_tab[j][k] = '\0';
			j++;
		}
		i++;
	}
	final_tab[j] = 0;
	return (final_tab);
}

char	**ft_split(char *str, char *charset)
{
	char sep;
	char count;
	char **final_tab;

	final_tab = NULL;
	sep = sep_set(str);
	str = malloc(sizeof(str) * ft_strlen(str + 10));
	if (str == NULL)
		return (NULL);
	count = comp_replace(str, charset, sep);
	*final_tab = malloc(sizeof(*final_tab) * (count + 2));
	real_split(final_tab, str, sep);
	return (final_tab);
}
