/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:44:31 by jdomingu          #+#    #+#             */
/*   Updated: 2022/03/03 12:48:40 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_its_base_ok(char *str)
{
	int	i;
	int	j;
	int	x;

	x = ft_strlen(str);
	if (x == 0 || x == 1)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] <= ' ' || str[i] == 127)
			return (0);
		j = i + 1;
		while (j < x)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (ft_its_base_ok(base) == 1)
	{
		if (nbr == -2147483648)
			ft_putnbr_base(nbr / len, base);
		if (nbr == -2147483648)
			ft_putnbr_base(-(nbr % len), base);
		else
		{
			if (nbr < 0)
			{
				ft_putchar('-');
				nbr = -nbr;
			}
			if (nbr < len)
				ft_putchar(base[nbr]);
			if (nbr >= len)
			{
				ft_putnbr_base(nbr / len, base);
				ft_putnbr_base(nbr % len, base);
			}
		}
	}
}

/*int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
	return (0);
}*/
