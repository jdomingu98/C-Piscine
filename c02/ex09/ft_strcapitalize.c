/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:02:21 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/19 19:10:19 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	es_primera_letra(char *str, int ind)
{
	if ((str[ind - 1] >= 'a' && str[ind - 1] <= 'z') || (str[ind - 1] >= 'A'
			&& str[ind - 1] <= 'Z') || (str[ind - 1] >= '0'
			&& str[ind - 1] <= '9'))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	primera_letra;

	i = 0;
	while (str[i] != '\0')
	{
		primera_letra = es_primera_letra(str, i);
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (primera_letra == 1)
			{
				str[i] -= ('a' - 'A');
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (primera_letra == 0)
			{
				str[i] += ('a' - 'A');
			}
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char a[] = "hola como esTas. yo eStoy abuRriDo hAcIEndo ESto";
	printf("%s\n", a);
	printf("%s", ft_strcapitalize(a));
	return (0);
}*/
