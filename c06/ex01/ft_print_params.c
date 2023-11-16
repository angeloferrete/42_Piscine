/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:45:46 by asousa-f          #+#    #+#             */
/*   Updated: 2023/03/28 10:45:47 by asousa-f         ###   ########.fr       */
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

	i = 1;
	(void)argc;
	while (argv[i] != NULL)
	{
		ft_str (argv[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
