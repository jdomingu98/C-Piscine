/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:28:10 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/17 10:42:04 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	if (b != 0)
	{
		*a = x / y;
		*b = x % y;
	}
}

/*
int main(void)
{
    int a;
    int b;

    a = 3;
    b = 3;
    ft_ultimate_div_mod(&a, &b);
    printf("División: %d, Módulo: %d", a, b);
    return (0);
}*/
