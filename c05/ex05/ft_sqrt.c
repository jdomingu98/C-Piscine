/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:41:46 by jdomingu          #+#    #+#             */
/*   Updated: 2022/03/01 13:33:01 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Calculado por el algoritmo babilonico (mirar Wikipedia)
int	ft_sqrt(int nb)
{
	int	b;
	int	h;

	if (nb <= 0)
		return (0);
	else
	{
		h = nb;
		b = 0;
		while (b != h)
		{
			b = h;
			h = ((nb / h) + h) / 2;
		}
		if (h * h == nb)
			return (h);
		else
			return (0);
	}
}

/*#include<stdio.h>
int	main(void)
{
	printf("%i\n", ft_sqrt(6486437));
	return (0);
}*/
