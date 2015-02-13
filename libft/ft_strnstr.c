/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:31:43 by dvolberg          #+#    #+#             */
/*   Updated: 2015/01/13 17:29:09 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*temp_s1;
	size_t	i;
	size_t	j;
	int		len_s2;

	i = 0;
	temp_s1 = (char *)s1;
	len_s2 = ft_strlen(s2);
	if (!len_s2)
		return ((char *)s1);
	while (temp_s1[i] && i < n)
	{
		if (temp_s1[i] == s2[0])
		{
			j = 0;
			while (s2[j] && temp_s1[i + j] == s2[j] && (i + j) < n)
				j++;
			if (!s2[j])
				return (&temp_s1[i]);
		}
		i++;
	}
	return (NULL);
}
