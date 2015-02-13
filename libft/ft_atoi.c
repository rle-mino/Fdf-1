/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 23:19:32 by dvolberg          #+#    #+#             */
/*   Updated: 2014/11/07 16:04:14 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	rec_atoi(const char *str, int rez)
{
	if (ft_isdigit(*str))
		return (rec_atoi(str + 1, 10 * rez + (*str - '0')));
	return (rez);
}

int			ft_atoi(const char *str)
{
	int		signe;

	signe = 1;
	while (*str <= ' ' && *str > '\0')
		str++;
	if (*str == '-')
		signe = -1;
	if (ft_strnequ(str, "-9223372036854775808", 20) && !ft_isdigit(str[20]))
		return (0);
	if (*str == '+' || signe == -1)
		str++;
	if (ft_isdigit(*str))
	{
		return (signe * rec_atoi(str, 0));
	}
	return (0);
}
