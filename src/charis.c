/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:09:04 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/06 11:13:33 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
