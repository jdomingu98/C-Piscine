/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:23:40 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/17 10:41:05 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int main(void)
{
    int a;
    int b;
    int x;
    int y;
    int *div = &x;
    int *mod = &y;

    a = 3;
    b = 3;
    ft_div_mod(a, b, div, mod);
    printf("Division: %d, Modulo: %d", x, y);
    return (0);
}*/
