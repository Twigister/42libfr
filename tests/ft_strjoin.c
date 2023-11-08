/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:26:42 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/08 16:29:47 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <stddef.h>
#include "tests.h"

typedef struct s_join {
	char	*s1;
	char	*s2;
}	t_join;

// A ecrire:
// Avec des ptrs NULL
// Strings vides
// ...

int	test_strjoin(void)
{
	const char		*test_names[] = {"Toi+Moi", NULL};
	const t_join	test_data[] = {{"Toi+", "Moi"}};
	const char		*test_res[] = {"Toi+Moi"};
	int				res[2];
	char			*tmp;

	res[0] = 0;
	res[1] = 0;
	ft_putstr("Testing ft_strjoin:\n");
	while (test_names[res[0]])
	{
		tmp = ft_strjoin(test_data[res[0]].s1, test_data[res[0]].s2);
		res[1] += s_to_s_test(test_names[res[0]], tmp, test_res[res[0]]);
		++res[0];
		free(tmp);
	}
	print_function_successes("ft_strjoin", res[1], res[0]);
	return (res[0] == res[1]);
}
