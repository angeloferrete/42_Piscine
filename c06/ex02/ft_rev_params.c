/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:52:34 by asousa-f          #+#    #+#             */
/*   Updated: 2023/03/28 10:52:36 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return (*str);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (argv[i] != argv[0])
	{
		ft_str(argv[i]);
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
