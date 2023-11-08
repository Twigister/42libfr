#include <stdlib.h>
#include <libft.h>
#include <stddef.h>
#include "tests.h"

typedef struct s_substr {
	char				*str;
	unsigned int		start;
	unsigned int		len;
}	t_substr;

// tests a ecrire :
// end trop long
// longueur = 0

int	test_substr(void)
{
	const char		*test_names[] = {"1st chars", "NULL ptr", "Start out of range", NULL};
	const t_substr	test_data[] = {{"Coucou", 0, 3}, {NULL, 0, 1}, {"Coucou", 100, 3}, };
	const char		*test_out[] = {"Cou", NULL, NULL};
	int				res[2];
	char			*tmp;

	res[0] = 0;
	res[1] = 0;
	ft_putstr("Testing ft_substr:\n");
	while (test_names[res[0]])
	{
		tmp =  ft_substr(test_data[res[0]].str, test_data[res[0]].start, \
			test_data[res[0]].len);
		res[1] += s_to_s_test(test_names[res[0]], tmp, test_out[res[0]]);
		++res[0];
		free(tmp);
	}
	print_function_successes("ft_substr", res[1], res[0]);
	return (res[0] == res[1]);
}
