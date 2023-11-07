/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generic.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:54:02 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/07 20:05:30 by arlarzil         ###   ########.fr       */
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
	if (ft_strcmp(res, cmp) == 0)
	{
		ft_putstr("PASSED\n");
		return (1);
	}
	else
	{
		ft_putstr("FAILED: expected \"");
		ft_putstr((char*)cmp);
		ft_putstr("\" but got \"");
		ft_putstr((char*)res);
		ft_putstr("\"\n");
		return (0);
	}
}
