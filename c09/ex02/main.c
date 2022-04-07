/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:04:39 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/24 09:37:59 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);
/* 
void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}


int		main(int argc, char **argv)
{
	int i = 0;
	char **tab = NULL;
	
	argc = 0;
	*tab = malloc(sizeof(tab) * 255);
	tab = ft_split(argv[1], argv[2]);
	while (tab[i] != 0)
	{
		ft_putstr(tab[i]);
		i++;
	}
	return (0);
}
*/
int main()
{
	char	**ptr;
	ptr = ft_split("", "");
	printf("%s\n", ptr[0]);
//	printf("%s\n", ptr[1]);
//	printf("%s\n", ptr[2]);
//	printf("%s\n", ptr[3]);
//	printf("%s\n", ptr[4]);
//	printf("%s\n", ptr[5]);
//	printf("%s\n", ptr[6]);
//	printf("%s\n", ptr[7]);
//	printf("%s\n", ptr[8]);
//	printf("%s\n", ptr[9]);
	//printf("%s\n", ptr[10]);
	//printf("%s\n", ptr[11]);
	free (ptr);
	return (0);
}
