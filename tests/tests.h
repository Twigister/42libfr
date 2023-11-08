/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:07:53 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/08 17:55:04 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <libft.h>
# include <stdlib.h>
// Generic testers
int		i_to_i_test(const char *name, int val, int comp);
int		s_to_s_test(const char *name, const char *res, const char *cmp);
int		a_to_a_test(const char *name, const void *res, const void *cmp);
int		mem_eq_test(const char *name, const void *res, const void *cmp, \
	size_t s);
void	print_function_successes(const char *f_name, int successes, \
	int test_count);

// Function tests
int		test_strlen(void);
int		test_toupper(void);
int		test_tolower(void);
int		test_isalpha(void);
int		test_isdigit(void);
int		test_isalnum(void);
int		test_isascii(void);
int		test_isprint(void);
int		test_atoi(void);
int		test_strncmp(void);
int		test_itoa(void);
int		test_strdup(void);
int		test_strchr(void);
int		test_substr(void);
int		test_strjoin(void);
int		test_strtrim(void);
int		test_striteri(void);
int		test_memcmp(void);

#endif
