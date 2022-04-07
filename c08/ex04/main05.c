/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 10:05:10 by jlong             #+#    #+#             */
/*   Updated: 2021/03/24 11:39:25 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_show_tab(struct s_stock_str *par);
void	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
char 	*ft_strdup(char *src);
struct	s_stock_str		*ft_strs_to_tab(int ac, char **av);

int 	main(void)
{
	char *str[3];
	str[0] = "drWVpsaGMXb9ZtZtIGLzdNcIaclGBdlMKPVXJ4EkE";
	str[1] = "mdrmdrdmrmdmdmdmd";
	str[2] = "xdtu as pas du crck ?";

	t_stock_str *dst = ft_strs_to_tab(3, str);
	ft_show_tab(dst);
	return 0;
}


