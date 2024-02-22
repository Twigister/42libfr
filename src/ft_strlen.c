/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:46:29 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/07 17:23:34 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	const char	*e;

	e = s;
	while (!((*((long long *)e) - 0x01010101010101010) & 0x8080808080808080))
		e += 8;
	if (!((*((int *)e) - 0x010101010) & 0x80808080))
		e += 4;
	if (!((*((short *)e) - 0x0101) & 0x8080))
		e += 2;
	if (*e)
		++e;
	return (e - s);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	printf("%d\n", ft_strlen(av[ac - 1]));
}
