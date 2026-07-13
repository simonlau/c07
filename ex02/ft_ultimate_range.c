/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 16:48:01 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/13 10:15:42 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (max < min)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int));
	if (!*range)
	{
		return (-1);
	}
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
