/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:42:06 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/07 20:32:50 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*res;

	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	return (ft_strcpy(res, s));
}

char	*ft_strndup(const char *s, size_t n)
{
	char	*res;
	size_t	len;

	if (!n)
		return (NULL);
	len = ft_strlen(s);
	res = malloc(sizeof(char) * (n + 1));
	if (!res)
		return (NULL);
	ft_strncpy(res, s, n);
	res[n] = 0;
	return (res);
}

char	*ft_strndup_e(const char *s, size_t n)
{
	char	*res;

	if (!s)
		return (NULL);
	if (n <= 0)
		n = 0;
	res = malloc(sizeof(char) * (n + 1));
	if (!res)
		return (NULL);
	ft_strncpy(res, s, n);
	res[n] = 0;
	return (res);
}
