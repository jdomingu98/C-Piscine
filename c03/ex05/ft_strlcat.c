/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingu <jdomingu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:16:36 by jdomingu          #+#    #+#             */
/*   Updated: 2022/02/22 12:16:40 by jdomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// https://linux.die.net/man/3/strlcat
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srclen;
	unsigned int	destlen;

	i = 0;
	j = ft_strlen(dest);
	destlen = j;
	srclen = ft_strlen(src);
	if (size == 0 || size <= j)
		return (srclen + size);
	while (src[i] != '\0' && i < size - destlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (destlen + srclen);
}

/*int main(void)
{
	char src[] = " ejercicio de la relacion";
	char dest[] = "Este es el ultimo";
	unsigned int s = ft_strlcat(dest, src, 28); 
	
	printf("%s", dest);
	return (0);
}*/
