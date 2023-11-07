/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:54:02 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/07 20:28:28 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>
#include "tests.h"

int	test_isalpha(void)
{
	int			i;
	int			test_success;
	const char	*test_names[] = {"A", "D", "z", "5", \
		"Out of ascii", "Negative", "Smart OOR", NULL};
	const int	test_inputs[] = {'A', 'D', 'z', '5', 456, -123, 'a' + 256};
	const int	test_outputs[] = {1, 1, 1, 0, 0, 0, 0};

	i = 0;
	test_success = 0;
	ft_putstr("Testing ft_isalpha:\n");
	while (test_names[i])
	{
		test_success += i_to_i_test(test_names[i], ft_isalpha(test_inputs[i]), \
			test_outputs[i]);
		++i;
	}
	print_function_successes("ft_isalpha", test_success, i);
	return (i == test_success);
}

int	test_isdigit(void)
{
	int			i;
	int			test_success;
	const char	*test_names[] = {"A", "D", "z", "5", \
		"Out of ascii", "Negative", "Smart OOR", NULL};
	const int	test_inputs[] = {'A', 'D', 'z', '5', 456, -123, 'a' + 256};
	const int	test_outputs[] = {0, 0, 0, 1, 0, 0, 0};

	i = 0;
	test_success = 0;
	ft_putstr("Testing ft_isdigit:\n");
	while (test_names[i])
	{
		test_success += i_to_i_test(test_names[i], ft_isdigit(test_inputs[i]), \
			test_outputs[i]);
		++i;
	}
	print_function_successes("ft_isdigit", test_success, i);
	return (i == test_success);
}

int	test_isalnum(void)
{
	int			i;
	int			test_success;
	const char	*test_names[] = {"A", "D", "z", "5", \
		"Out of ascii", "Negative", "Smart OOR", "!", NULL};
	const int	test_inputs[] = {'A', 'D', 'z', '5', 456, -123, 'a' + 256, '!'};
	const int	test_outputs[] = {1, 1, 1, 1, 0, 0, 0, 0};

	i = 0;
	test_success = 0;
	ft_putstr("Testing ft_isalnum:\n");
	while (test_names[i])
	{
		test_success += i_to_i_test(test_names[i], ft_isalnum(test_inputs[i]), \
			test_outputs[i]);
		++i;
	}
	print_function_successes("ft_isalnum", test_success, i);
	return (i == test_success);
}

int	test_isascii(void)
{
	int			i;
	int			test_success;
	const char	*test_names[] = {"A", "D", "z", "5", \
		"Out of ascii", "Negative", "Smart OOR", "!", "\\0", NULL};
	const int	test_inputs[] = {'A', 'D', 'z', '5', 456, -123, \
		'a' + 256, '!', 0};
	const int	test_outputs[] = {1, 1, 1, 1, 0, 0, 0, 1, 1};

	i = 0;
	test_success = 0;
	ft_putstr("Testing ft_isascii:\n");
	while (test_names[i])
	{
		test_success += i_to_i_test(test_names[i], ft_isascii(test_inputs[i]), \
			test_outputs[i]);
		++i;
	}
	print_function_successes("ft_isascii", test_success, i);
	return (i == test_success);
}

int	test_isprint(void)
{
	int			i;
	int			test_success;
	const char	*test_names[] = {"A", "D", "z", "5", \
		"Out of ascii", "Negative", "Smart OOR", "!", " ", "tab", \
		"\\0", NULL};
	const int	test_inputs[] = {'A', 'D', 'z', '5', 456, -123, 'a' + 256, \
		'!', ' ', '\t', '\0'};
	const int	test_outputs[] = {1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0};

	i = 0;
	test_success = 0;
	ft_putstr("Testing ft_isprint:\n");
	while (test_names[i])
	{
		test_success += i_to_i_test(test_names[i], ft_isprint(test_inputs[i]), \
			test_outputs[i]);
		++i;
	}
	print_function_successes("ft_isprint", test_success, i);
	return (i == test_success);
}
