/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:17:59 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/08 18:30:39 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

#define TEST_STR_COUNT 2
#define TEST_INT_COUNT 2
#define TEST_BONUS_COUNT 1

typedef struct s_mem_pair {
	void	*a1;
	void	*a2;
	size_t	n;
}	t_mem_pair;

static void	fill_strings(t_mem_pair *p)
{
	const char	*str1[] = {"coucou", "coucou"};
	const char	*str2[] = {"coucou", "uocuoc"};
	const int	len[] = {7, 7};
	int			i;

	i = 0;
	while (i < TEST_STR_COUNT)
	{
		p[i].a1 = ft_strdup(str1[i]);
		p[i].a2 = ft_strdup(str2[i]);
		p[i].n = len[i];
		++i;
	}
}

static void	fill_int(t_mem_pair *p)
{
	const int	a1[][3] = {{123, 456, 234}, {123, 232, 111}};
	const int	a2[][3] = {{123, 456, 234}, {123, 123, 123}};
	const int	len[] = {3, 3};
	int			i;
	void		*tmp;

	i = 0;
	while (i < TEST_INT_COUNT)
	{
		tmp = malloc(sizeof(int) * len[i]);
		p[i + TEST_STR_COUNT].a1 = ft_memcpy(tmp, a1[i], len[i] * 4);
		tmp = malloc(sizeof(int) * len[i]);
		p[i + TEST_STR_COUNT].a2 = ft_memcpy(tmp, a2[i], len[i] * 4);
		p[i + TEST_STR_COUNT].n = len[i] * 4;
		++i;
	}
}

static t_mem_pair	*alloc_pairs(void)
{
	t_mem_pair	*res;
	long		*b;

	res = malloc(sizeof(t_mem_pair) * \
		(TEST_STR_COUNT + TEST_INT_COUNT + TEST_BONUS_COUNT));
	fill_strings(res);
	fill_int(res);
	b = malloc(sizeof(long));
	*b = 0x10101010;
	res[TEST_STR_COUNT + TEST_INT_COUNT].a1 = b;
	b = malloc(sizeof(long));
	*b = 0x10101010;
	res[TEST_STR_COUNT + TEST_INT_COUNT].a2 = b;
	res[TEST_STR_COUNT + TEST_INT_COUNT].n = sizeof(long);
	return (res);
}

static void	free_pairs(t_mem_pair *p, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(p[i].a1);
		free(p[i].a2);
		++i;
	}
	free(p);
}

int	test_memcmp(void)
{
	const char	*test_names[] = {"Identical strings", "Different string", \
		"Identical int tab", "Diff int tabs", "Long comp", NULL};
	t_mem_pair	*test_data;
	const int	res[] = {0, 'c' - 'u', 0, 232 - 123, 0};
	int			i;
	int			good;

	i = 0;
	good = 0;
	ft_putstr("Testing ft_memcmp\n");
	test_data = alloc_pairs();
	while (test_names[i])
	{
		good += i_to_i_test(test_names[i], \
			ft_memcmp(test_data[i].a1, test_data[i].a2, test_data[i].n), \
			res[i]);
		++i;
	}
	free_pairs(test_data, i);
	print_function_successes("ft_memcmp", good, i);
	return (good == i);
}
