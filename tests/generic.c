/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generic.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:54:02 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/08 16:28:28 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>
#include "tests.h"

int	i_to_i_test(const char *test_name, int val, int comp)
{
	ft_putstr((char *)test_name);
	ft_putstr(": ");
	if (val == comp)
	{
		ft_putstr("PASSED\n");
		return (1);
	}
	else
	{
		ft_putstr("FAILED: expected ");
		ft_putnbr(comp);
		ft_putstr(" but got ");
		ft_putnbr(val);
		ft_putstr("\n");
		return (0);
	}
}

void	print_function_successes(const char *f_name, int successes, \
	int test_count)
{
	ft_putstr((char *)f_name);
	ft_putstr(" passed ");
	ft_putnbr(successes);
	ft_putstr("/");
	ft_putnbr(test_count);
	ft_putstr(" tests\n\n");
}

int	s_to_s_test(const char *test_name, const char *res, const char *cmp)
{
	ft_putstr((char *)test_name);
	ft_putstr(": ");
	if ((res == NULL && cmp == NULL) || \
		(res && cmp && ft_strcmp(res, cmp) == 0))
	{
		ft_putstr("PASSED\n");
		return (1);
	}
	else
	{
		ft_putstr("FAILED: expected \"");
		if (cmp)
			ft_putstr((char *)cmp);
		else
			ft_putstr("(null)");
		ft_putstr("\" but got \"");
		if (res)
			ft_putstr((char *)res);
		else
			ft_putstr("(null)");
		ft_putstr("\"\n");
		return (0);
	}
}

int	a_to_a_test(const char *name, const void *res, const void *cmp)
{
	ft_putstr((char *)name);
	ft_putstr(": ");
	if (res == cmp)
	{
		ft_putstr("PASSED\n");
		return (1);
	}
	else
	{
		ft_putstr("FAILED: expected ");
		ft_putptr(cmp);
		ft_putchar(*(char *)cmp);
		ft_putstr(" but got ");
		ft_putptr(res);
		ft_putchar(*(char *)res);
		ft_putstr("\n");
		return (0);
	}
}

int	mem_eq_test(const char *name, const void *res, const void *cmp, size_t s)
{
	ft_putstr((char *)name);
	ft_putstr(": ");
	if (ft_memcmp(res, cmp, s) == 0)
	{
		ft_putstr("PASSED\n");
		return (1);
	}
	else
	{
		ft_putstr("FAILED: expected \"");
		if (cmp)
			write(1, (char *)cmp, s);
		else
			ft_putstr("(null)");
		ft_putstr("\" but got \"");
		if (res)
			write(1, (char *)res, s);
		else
			ft_putstr("(null)");
		ft_putstr("\"\n");
		return (0);
	}
}
