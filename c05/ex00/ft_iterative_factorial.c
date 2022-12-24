/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:30:00 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/22 14:32:24 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}

/*#include<stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_factorial(-1));
	return(0);
}*/