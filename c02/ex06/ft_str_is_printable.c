/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:40:39 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/19 19:04:39 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	char a[] = "nefiov fmipdf;f-.-.-85938%%%6665565()())(''";
	if (ft_str_is_printable(a) == 1)
		printf("El string es valido");
	else
		printf("El string NO es valido");
	return (0);
}*/
