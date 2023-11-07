/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:17:05 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/07 20:29:53 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <stddef.h>
#include "tests.h"

int	test_strdup(void)
{
	const char	*test_names[] = {"Standard string", "NULL ptr", "Empty string", NULL};
	const char	*test_values[] = {"Standard", NULL, ""};
	const char	*exp_ret[] = {"Standard", NULL, ""};
	int			res[2];
	char		*tmp;

	res[0] = 0;
	res[1] = 0;
	ft_putstr("Testing ft_strdup:\n");
	while (test_names[res[0]])
	{
		tmp = ft_strdup(test_values[res[0]]);
		res[1] += s_to_s_test(test_names[res[0]], tmp, exp_ret[res[0]]);
		++res[0];
		free(tmp);
	}
	print_function_successes("ft_strdup", res[0], res[1]);
	return (res[0] == res[1]);
}
