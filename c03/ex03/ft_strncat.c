/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:09:05 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/12 15:31:27 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

char			*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int len_d;

	i = 0;
	len_d = str_len(dest);
	while (src[i] != '\0' && nb > 0)
	{
		dest[len_d] = src[i];
		len_d++;
		i++;
		nb--;
	}
	dest[len_d] = '\0';
	return (dest);
}
