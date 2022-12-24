/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:28:13 by jdomingu          #+#    #+#             */
/*   Updated: 2022/03/02 12:31:03 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_whitespace_signs(char *str, int *ptr)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	*ptr = i;
	return (sign);
}

int	ft_its_base_ok(char *str)
{
	int	i;
	int	j;

	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] <= ' ' || str[i] == 127)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_base_of(char l, char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == l)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	sign;
	int	len;
	int	num;

	res = 0;
	len = ft_its_base_ok(base);
	if (len > 0)
	{
		sign = ft_whitespace_signs(str, &i);
		num = ft_base_of(str[i], base);
		while (str[i] != '\0' && num != -1)
		{
			res = res * len + num;
			i++;
			num = ft_base_of(str[i], base);
		}
		return (res * sign);
	}
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("	++-+-++--21", "0123456789"));
	printf("%d\n", ft_atoi_base("    ---10", "01"));
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
}*/
