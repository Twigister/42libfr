/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:30:13 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/07 19:46:00 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stddef.h>
#include "tests.h"

typedef struct s_strpair {
	char	*s1;
	char	*s2;
	size_t	n;
}	t_strpair;

int	test_strncmp(void)
{
	const char		*test_names[] = {"Identical, n too long", "Not identical", \
		"NULL ptr", "n=0", NULL};
	const t_strpair	tests[] = {{"Coucou", "Coucou", 100}, {"Coucou", "Salut", 123}, \
		{NULL, NULL, 123}, {"Wesh", "Non", 0}};
	const int		res[] = {0, 'C' - 'S', 0, 0};
	int				i;
	int				good;

	i = 0;
	good = 0;
	ft_putstr("Testing ft_strncmp:\n");
	while (test_names[i])
	{
		good += i_to_i_test(test_names[i], \
			ft_strncmp(tests[i].s1, tests[i].s2, tests[i].n), res[i]);
		++i;
	}
	print_function_successes("ft_strncmp", good, i);
	return (good == i);
}
