#include <stdlib.h>
#include <libft.h>
#include <stddef.h>
#include "tests.h"

// A ecrire:
// Avec des ptrs NULL
// Strings vides
// pas de charset

typedef struct s_trim {
	char	*str;
	char	*charset;
}	t_trim;

int	test_strtrim(void)
{
	const char		*test_names[] = {"No trim", "Two diff in charset", NULL};
	const t_trim	test_data[] = {{"Toi+Moi", " "}, {" *Toi+Moi * *", "* "}};
	const char		*test_res[] = {"Toi+Moi", "Toi+Moi"};
	int				res[2];
	char			*tmp;

	res[0] = 0;
	res[1] = 0;
	ft_putstr("Testing ft_strtrim:\n");
	while (test_names[res[0]])
	{
		tmp = ft_strtrim(test_data[res[0]].str, test_data[res[0]].charset);
		res[1] += s_to_s_test(test_names[res[0]], tmp, test_res[res[0]]);
		++res[0];
		free(tmp);
	}
	print_function_successes("ft_strtrim", res[1], res[0]);
	return (res[0] == res[1]);
}
