/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:54:02 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/07 18:31:48 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>
#include "tests.h"

int	test_tolower(void)
{
	int			i;
	int			test_success;
	const char	*test_names[] = {"A to a", "D to d", "Z to z", "z", \
		"Out of ascii", "Negative", "Smart OOR", NULL};
	const int	test_inputs[] = {'A', 'D', 'Z', 'z', 456, -123, 'a' + 256};
	const int	test_outputs[] = {'a', 'd', 'z', 'z', 456, 133, 'a' + 256};

	i = 0;
	test_success = 0;
	ft_putstr("Testing ft_tolower:\n");
	while (test_names[i])
	{
		test_success += i_to_i_test(test_names[i], ft_tolower(test_inputs[i]), \
			test_outputs[i]);
		++i;
	}
	print_function_successes("ft_tolower", test_success, i);
	return (i == test_success);
}
