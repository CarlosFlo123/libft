/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:33:19 by cflores-          #+#    #+#             */
/*   Updated: 2018/07/23 21:38:38 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t s)
{
	char	*ptr;
	int		i;
	int		j;
	int		k;

	k = ft_strlen(s2);
	i = 0;
	j = 0;
	if (!k)
		return ((char *)s1);
	while (s1[i] != '\0' && i < (int)s)
	{
		if (s1[i] == s2[j])
		{
			if (j == 0)
				ptr = &((char *)s1)[i];
			j++;
		}
		else
			j = 0;
		if (j == (int)ft_strlen(s2))
			return (ptr);
		i++;
	}
	return (NULL);
}
