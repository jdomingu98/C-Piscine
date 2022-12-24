/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:35:12 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/19 19:02:58 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char a[] = "AIUDAAAANOSEPORQUEESTOYGRITANDOOO";
	if (ft_str_is_uppercase(a) == 1)
		printf("El string es valido");
	else
		printf("El string NO es valido");
	return (0);
}
*/
