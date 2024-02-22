/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:52:42 by arlarzil          #+#    #+#             */
/*   Updated: 2024/02/19 14:59:48 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void		*res;
	const void	*base;
	size_t		i;
	size_t		block_count;

	if (!dest && !src)
		return (0);
	res = dest;
	base = src;
	block_count = n / sizeof(long long);
	i = 0;
	while (i < block_count)
	{
		((long long *)res)[i] = ((long long *)base)[i];
		++i;
	}
	i = i * sizeof(long long);
	while (i < n)
	{
		((char *)res)[i] = ((char *)base)[i];
		++i;
	}
	return (dest);
}
