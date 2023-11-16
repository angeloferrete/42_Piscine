/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:21:34 by asousa-f          #+#    #+#             */
/*   Updated: 2023/03/21 16:21:37 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	i;

	counter = 0;
	i = 0;
	while (src[counter] != '\0')
	{
		counter++;
	}
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (counter);
}
/*
int	main(void)
{
	char src[] = "hellooooo";
	char dest[] = "jsfhgjksdhelo";
	printf("%d | %s", ft_strlcpy(dest, src, 18), dest);
}*/
