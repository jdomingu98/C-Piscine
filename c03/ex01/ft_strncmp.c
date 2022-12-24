/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:15:44 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/23 20:11:36 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s2[i] > s1[i])
			return (-1);
		i++;
	}
	return (0);
}

/*int main(void)
{
	int i = ft_strncmp("hola", "hxla", 1);
	if (i > 0)
		printf("Gana hola");
	else if (i < 0)
		printf("Gana hxla");
	else
		printf("Son iguales");
	return (0);
}*/
