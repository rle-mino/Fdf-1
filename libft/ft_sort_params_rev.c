/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params_rev.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <dvolberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:29:26 by dvolberg          #+#    #+#             */
/*   Updated: 2015/01/13 17:29:27 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_params_rev(char **argv, int argc)
{
	char	*save;
	int		save_i;
	int		i;
	int		j;

	j = 0;
	save_i = 0;
	while (save_i < argc)
	{
		i = save_i + 1;
		while (i < argc)
		{
			while (argv[i][j] == argv[save_i][j])
				j++;
			if (argv[i][j] > argv[save_i][j])
			{
				save = argv[i];
				argv[i] = argv[save_i];
				argv[save_i] = save;
			}
			j = 0;
			i++;
		}
		save_i++;
	}
}
