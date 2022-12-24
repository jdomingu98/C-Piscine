/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:39:44 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/14 15:38:40 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printvalue(char fnumber, char snumber)
{
	write(1, &fnumber, 1);
	write(1, &snumber, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_printvalue((a / 10) + '0', (a % 10) + '0');
			write(1, " ", 1);
			ft_printvalue((b / 10) + '0', (b % 10) + '0');
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/