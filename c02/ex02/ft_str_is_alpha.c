/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:06:24 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/19 19:01:40 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	es_alfabetico(int l)
{
	if ((l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (es_alfabetico(str[i]) == 1)
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	a[] = "HolaBuenasEsteEsValido";
	char	b[] = "11111";

	if (ft_str_is_alpha(a) == 1)
		printf("El string es valido");
	else
		printf("El string NO es valido");
	return (0);
}*/
