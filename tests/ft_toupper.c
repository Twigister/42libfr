/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:54:02 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/07 18:22:33 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>
#include "tests.h"

int	test_toupper(void)
{
	int			i;
	int			test_success;
	const char	*test_names[] = {"a to A", "d to D", "z to Z", "Z", \
		"Out of ascii", "Negative", "Smart OOR", NULL};
	const int	test_inputs[] = {'a', 'd', 'z', 'Z', 456, -123, 'a' + 256};
	const int	test_outputs[] = {'A', 'D', 'Z', 'Z', 456, 133, 'a' + 256};

	i = 0;
	test_success = 0;
	ft_putstr("Testing ft_toupper:\n");
	while (test_names[i])
	{
		test_success += i_to_i_test(test_names[i], ft_toupper(test_inputs[i]), \
			test_outputs[i]);
		++i;
	}
	print_function_successes("ft_toupper", test_success, i);
	return (i == test_success);
}
