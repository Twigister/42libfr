/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:14:11 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/08 19:34:56 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include <libft.h>
#include <stddef.h>

int	test_atoi(void)
{
	const char	*test_names[] = {"Zero", "Starting with 0", "INT_MAX", \
		"INT_MIN", "123a123", "AAAAAAA", "Double+", "NULL ptr", "1", NULL};
	const char	*tests[] = {"000", "0123", "2147483647", "-2147483648", \
		"123a123", "AAAAAAA", "++123", NULL, "1"};
	const int	res[] = {0, 123, 2147483647, -2147483648, 123, 0, 0, 0, 1};
	int			i;
	int			good;

	i = 0;
	good = 0;
	ft_putstr("Testing ft_atoi:\n");
	while (test_names[i])
	{
		good += i_to_i_test(test_names[i], ft_atoi(tests[i]), res[i]);
		++i;
	}
	print_function_successes("ft_atoi", good, i);
	return (i == good);
}
