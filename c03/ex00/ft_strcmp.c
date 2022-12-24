/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:54:23 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/23 15:53:12 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*int main(void)
{
	int i = ft_strcmp("hola", "hxla");
	if (i > 0)
		printf("Gana hola");
	else if (i < 0)
		printf("Gana hxla");
	else
		printf("Son iguales");
	return (0);
}*/
