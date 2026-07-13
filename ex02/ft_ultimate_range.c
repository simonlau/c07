/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 16:48:01 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/13 23:31:59 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define ERROR -1

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	diff = max - min;
	if (diff <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(*range) * diff);
	if (!*range)
	{
		return (ERROR);
	}
	i = 0;
	while (i < diff)
	{
		range[0][i] = min + i;
		i++;
	}
	return (diff);
}
