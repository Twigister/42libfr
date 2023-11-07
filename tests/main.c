/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:04:38 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/07 20:00:26 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>
#include "tests.h"

int	main(void)
{
	int			i;
	int			functions_passing;	
	const void	*f[] = {&test_strlen, &test_toupper, &test_tolower, \
		&test_isalpha, &test_isdigit, &test_isalnum, &test_isascii, \
		&test_isprint, &test_atoi, &test_strncmp, &test_itoa, NULL};

	i = 0;
	functions_passing = 0;
	while (f[i])
	{
		functions_passing += ((int (*)(void))f[i])();
		++i;
	}
	ft_putnbr(functions_passing);
	ft_putstr("/");
	ft_putnbr(i);
	ft_putstr(" functions passed\n");
	return (0);
}
