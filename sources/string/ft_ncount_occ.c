/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_occ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dieu <tle-dieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 22:42:07 by tle-dieu          #+#    #+#             */
/*   Updated: 2019/04/12 19:29:46 by tle-dieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ncount_occ(char const *s, char c, int n)
{
	int occ;
	int i;

	occ = 0;
	i = 0;
	while (*s && i++ < n)
	{
		if (*s == c)
			occ++;
		s++;
	}
	return (occ);
}
