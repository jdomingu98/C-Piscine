/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:43:30 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/22 14:44:21 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*#include<stdio.h>
int main(void)
{
    int b = ft_is_prime(17);
    if(b == 1)
        printf("No sera usted acertador de primos");
    else
        printf("Me da a mi que ese no es de ser primo");
    return (0);
}*/
