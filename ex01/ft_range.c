/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 16:48:01 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/13 23:16:42 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;
	int	diff;

	diff = max - min;
	if (diff <= 0)
	{
		return (NULL);
	}
	result = malloc(sizeof(*result) * diff);
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	while (i < diff)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
