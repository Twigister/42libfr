/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:54:02 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/07 17:50:44 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>
#include "tests.h"

static int	strlen_test_1(void)
{
	ft_putstr("Empty string test: ");
	if (ft_strlen("") == 0)
	{
		ft_putstr("PASSED\n");
		return (1);
	}
	else
	{
		ft_putstr("FAILED\n");
		return (0);
	}
}

static int	strlen_test_2(void)
{
	ft_putstr("Classic string test: ");
	if (ft_strlen("Coucou les potes!\n") == 18)
	{
		ft_putstr("PASSED\n");
		return (1);
	}
	else
	{
		ft_putstr("FAILED\n");
		return (0);
	}
}

static int	strlen_test_3(void)
{
	ft_putstr("NULL ptr test: ");
	if (ft_strlen(NULL) == 0)
	{
		ft_putstr("PASSED\n");
		return (1);
	}
	else
	{
		ft_putstr("FAILED\n");
		return (0);
	}
}

int	test_strlen(void)
{
	int	test_success;

	test_success = 0;
	ft_putstr("Testing ft_strlen:\n");
	test_success += strlen_test_1();
	test_success += strlen_test_2();
	test_success += strlen_test_3();
	print_function_successes("ft_strlen", test_success, 3);
	return (test_success == 3);
}
