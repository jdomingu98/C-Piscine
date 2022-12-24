/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:32:53 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/17 10:49:31 by jdomingu         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}

/*int main(void)
{
    int a[4];

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;

    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
    ft_rev_int_tab(a, 4);
    printf("%d %d %d %d", a[0], a[1], a[2], a[3]);
    return (0);
}*/
