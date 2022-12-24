/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:31:10 by atrujill          #+#    #+#             */
/*   Updated: 2022/02/13 19:07:37 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printline(char first, char middle, char last, int x)
{
	int	number_middle_col;

	number_middle_col = x - 2;
	ft_putchar(first);
	while (number_middle_col > 0)
	{
		ft_putchar(middle);
		number_middle_col--;
	}
	if (x > 2)
	{
		ft_putchar(last);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	fil;

	fil = 1;
	if (x > 0 && y > 0)
	{
		while (fil <= y)
		{
			if (fil == 1 || fil == y)
			{
				ft_printline('A', 'B', 'C', x);
			}
			else
			{
				ft_printline('B', ' ', 'B', x);
			}
			fil++;
		}
	}
}
