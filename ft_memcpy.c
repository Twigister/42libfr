/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:52:42 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/06 16:15:27 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*res;
	char	*base;
	size_t	i;

	if (!dest && !src)
		return (0);
	res = (char *)dest;
	base = (char *)src;
	i = 0;
	while (i < n)
	{
		res[i] = base[i];
		++i;
	}
	return (dest);
}
