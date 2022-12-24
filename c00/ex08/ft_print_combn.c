/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:47:00 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/15 13:00:36 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_all_comb(int *tab, int n)
{
	int		i;
	int		b;
	char	c;

	i = 1;
	b = 1;
	while (i < n)
	{
		if (tab[i - 1] >= tab[i])
			b = 0;
		i++;
	}
	if (b == 1)
	{
		i = 0;
		while (i < n)
		{
			c = tab[i] + '0';
			write(1, &c, 1);
			i++;
		}
		if (tab[0] < (10 - n))
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[9];

	i = 0;
	while (i < n)
	{
		tab[i] = 0;
		i++;
	}
	while (tab[0] <= (10 - n) && n > 0 && n < 10)
	{
		ft_print_all_comb(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i >= 1 && n > 1)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
			i--;
		}
	}
}

/*int	main(void)
{
	ft_print_combn(2);
	return (0);
}*/
