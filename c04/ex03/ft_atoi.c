/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:44:22 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/26 12:45:02 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_what_sign_is(char *str, int *ptr)
{
	int	cont;
	int	i;

	i = 0;
	cont = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			cont = -cont;
		i++;
	}
	*ptr = i;
	return (cont);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = ft_what_sign_is(str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

/*int main(void)
{
	char *s = "   ---+--010203i83902b567fhhdxvbsi";
	printf("%d", ft_atoi(s));
	return (0);
}*/
