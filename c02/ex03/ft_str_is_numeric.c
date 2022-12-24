/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:27:31 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/19 19:02:07 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char a[] = "HolaBuenasEsteNoEsValido";
	if(ft_str_is_numeric(a) == 1)
		printf("El string es valido");
	else
		printf("El string NO es valido");
	return (0);
}*/
