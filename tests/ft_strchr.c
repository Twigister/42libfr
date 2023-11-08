/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:31:45 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/08 17:09:52 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stddef.h>
#include "tests.h"

int	test_strchr(void)
{
	const char	*test_names[] = {"string beggining", "NULL ptr", \
		"random place", "in end", "\\0", "not in string", "Multiple match", \
		NULL};
	const char	*test_strings[] = {"Hey", NULL, "Hey", "3e test!", "La fin", \
		"Hee", "YEEEEEHEEEE"};
	const char	test_chars[] = {'H', 'h', 'e', '!', '\0', 'p', 'E'};
	const int	test_ind[] = {0, -1, 1, 7, 6, -1, 1};
	int			res[2];

	res[0] = 0;
	res[1] = 0;
	ft_putstr("Testing ft_strchr:\n");
	while (test_names[res[0]])
	{
		res[1] += a_to_a_test(test_names[res[0]], ft_strchr(\
			test_strings[res[0]], test_chars[res[0]]), \
			(char *)((long)(test_strings[res[0]] + test_ind[res[0]]) *\
			(test_ind[res[0]] != -1)));
		++res[0];
	}
	print_function_successes("ft_strchr", res[1], res[0]);
	return (res[0] == res[1]);
}
