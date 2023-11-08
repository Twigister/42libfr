#include <stdlib.h>
#include <libft.h>
#include <stddef.h>
#include "tests.h"

typedef struct s_substr {
	char	*str;
	void	(*f)(unsigned int, char *);
}	t_substr;

// tests a ecrire :
// WIP

static void	test_func1(unsigned int i, char *c)
{
	*c = i % 10 + '0';
}

static void	test_func2(unsigned int i, char *c)
{
	(void)i;
	*c -= ('a' <= *c && *c <= 'z') * 32;
}

int	test_striteri(void)
{
	const char		*test_names[] = {"Basic test", "Basic test 2", \
		"No function", "No string", "Empty string", NULL};
	const t_substr	test_data[] = {{"Coucou", test_func1}, {"coucou", test_func2}, \
		{"Coucou", NULL}, {NULL, test_func1}, {"", test_func1}};
	const char		*test_out[] = {"012345", "COUCOU", "Coucou", NULL, ""};
	int				res[2];
	char			*tmp;

	res[0] = 0;
	res[1] = 0;
	ft_putstr("Testing ft_striteri:\n");
	while (test_names[res[0]])
	{
		tmp = ft_strdup(test_data[res[0]].str);
		ft_striteri(tmp, test_data[res[0]].f);
		res[1] += s_to_s_test(test_names[res[0]], tmp, test_out[res[0]]);
		++res[0];
		free(tmp);
	}
	print_function_successes("ft_striteri", res[1], res[0]);
	return (res[0] == res[1]);
}
