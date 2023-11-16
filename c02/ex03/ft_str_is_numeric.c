/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:39:39 by asousa-f          #+#    #+#             */
/*   Updated: 2023/03/21 12:40:24 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}	
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_numeric("123"));
	printf("%d\n", ft_str_is_numeric("1b3"));
	printf("%d\n", ft_str_is_numeric(" 1.....===2 3"));
}*/
