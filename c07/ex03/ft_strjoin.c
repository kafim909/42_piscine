/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:08:00 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/18 11:55:22 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char **str)
{
	int i;

	i = 0;
	while ((*str)[i] != '\0')
		i++;
	return (i);
}

char	*str_cat(char *src, char *dest)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_count(char **strs, int size)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < size)
	{
		count += ft_strlen(strs);
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		count;
	char	*full_str;

	i = 0;
	count = ft_count(strs, size);
	while (sep[i] != '\0')
		i++;
	count += i * (size - 1);
	i = 0;
	full_str = malloc(sizeof(char) * (count + 1));
	if (full_str == NULL)
		return (0);
	while (i < size)
	{
		str_cat(strs[i], full_str);
		if (i < size - 1)
			str_cat(sep, full_str);
		i++;
	}
	return (full_str);
}
