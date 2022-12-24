/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:34:44 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/17 10:50:44 by jdomingu         ###   ########.fr       */
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

int	ft_busca_minimo(int *tab, int i, int size)
{
	int	j;
	int	min;

	j = i;
	min = i;
	while (j < size)
	{
		if (tab[j] < tab[min])
			min = j;
		j++;
	}
	return (min);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	min;

	i = 0;
	while (i <= size / 2)
	{
		min = ft_busca_minimo(tab, i, size);
		ft_swap(&tab[i], &tab[min]);
		i++;
	}
}

/*int main(void)
{
    int a[4];

    a[0] = 3;
    a[1] = 2;
    a[2] = 4;
    a[3] = 1;
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
    ft_sort_int_tab(a, 4);
    printf("%d %d %d %d", a[0], a[1], a[2], a[3]);
    return (0);
}*/
