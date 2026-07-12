/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 16:48:01 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/12 17:00:29 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (max < min)
	{
		return (NULL);
	}
	result = malloc(sizeof(int));
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	while (i < max - min)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
