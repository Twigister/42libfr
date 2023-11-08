/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:46:59 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/08 16:26:04 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <stddef.h>
#include "tests.h"

int	test_itoa(void)
{
	const char	*test_names[] = {"ZERO", "POS", "NEG", "INT_MIN", \
		"INT_MAX", NULL};
	const int	test_values[] = {0, 101, -951, -2147483648, 2147483647};
	const char	*test_res[] = {"0", "101", "-951", "-2147483648", "2147483647"};
	int			res[2];
	char		*tmp;

	res[0] = 0;
	res[1] = 0;
	ft_putstr("Testing ft_itoa:\n");
	while (test_names[res[0]])
	{
		tmp = ft_itoa(test_values[res[0]]);
		res[1] += s_to_s_test(test_names[res[0]], tmp, test_res[res[0]]);
		++res[0];
		free(tmp);
	}
	print_function_successes("ft_itoa", res[1], res[0]);
	return (res[0] == res[1]);
}
