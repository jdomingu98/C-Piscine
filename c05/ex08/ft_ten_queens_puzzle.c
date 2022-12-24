/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:41:48 by jdomingu          #+#    #+#             */
/*   Updated: 2022/03/01 13:27:58 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_abs(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

int	ft_is_valid(char *a, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (a[i] == a[pos] || ft_abs(i - pos) == ft_abs(a[i] - a[pos]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_ten_queens_starting_with(char *a, int j)
{
	char	num;
	int		cont;

	cont = 0;
	if (j == 10)
	{
		if (ft_is_valid(a, j))
		{
			write(1, a, 10);
			write(1, "\n", 1);
			return (1);
		}
	}
	else
	{
		num = '0';
		while (num <= '9')
		{
			a[j] = num;
			if (ft_is_valid(a, j))
				cont += ft_ten_queens_starting_with(a, j + 1);
			num++;
		}
	}
	return (cont);
}

int	ft_ten_queens_puzzle(void)
{
	char	a[10];
	int		i;

	i = 0;
	while (i < 10)
	{
		a[i] = 0;
		i++;
	}
	return (ft_ten_queens_starting_with(a, 0));
}

/*#include<stdio.h>

int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
	return (0);
}*/
