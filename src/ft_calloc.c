/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:38:46 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/08 18:45:55 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;
	if (nmemb > UINT_MAX / size || nmemb * size <= 0)
		return (NULL);
	ret = malloc(size * nmemb);
	ft_bzero(ret, nmemb * size);
	return (ret);
}
