/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 13:51:09 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/24 16:29:36 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
	else
		return (1);
}

int		is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	is_min(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	is_maj(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	while (str[i])
	{
		if (is_alpha(str[i]))
		{
			if (i == 1 && is_min(str[i]))
				str[i - 1] -= 32;
			if (!(is_alpha(str[i - 1])) && is_min(str[i]))
			{
				str[i] -= 32;
				if (is_num(str[i - 1]) && is_maj(str[i]))
					str[i] += 32;
			}
			else if (is_maj(str[i]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
