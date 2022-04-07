/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 16:21:07 by mtournay          #+#    #+#             */
/*   Updated: 2021/03/05 17:42:17 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	wr(int d, int e, int f, int g)
{
	int		loop;
	char	coma;
	char	space;

	loop = d;
	coma = ',';
	space = ' ';
	if (loop <= 57)
	{
		write(1, &d, 1);
		write(1, &e, 1);
		write(1, &space, 1);
		write(1, &f, 1);
		write(1, &g, 1);
		if (d < 57)
		{
			write(1, &coma, 1);
		}
	}
}

int main ()
{
	ft_print_comb2(void);
	return 0;
}

void ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;
	
	a =0;
	b =0;
	c =0;
	d =0;
	

