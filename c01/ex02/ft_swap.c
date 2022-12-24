/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:22:53 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/17 10:39:45 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
int main(void)
{
    int a;
    int b;

    a = 3;
    b = 4;
    printf("a: %d, b: %d\n", a, b);
    ft_swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);
    return (0);
}*/
