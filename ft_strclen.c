/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:33:21 by tle-dieu          #+#    #+#             */
/*   Updated: 2018/11/26 13:55:17 by tle-dieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strclen(char const *s, char c)
{
	size_t i;

	i = 0;
	if (s)
		while (s[i] && s[i] != c)
			i++;
	return (i);
}
