/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 17:03:36 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/13 22:54:51 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		index;
	char	*new_str;
	char	*new_letter_ptr;

	index = 0;
	while (src[index] != '\0')
	{
		index++;
	}
	new_str = malloc(sizeof(*new_str) * index + 1);
	if (!new_str)
	{
		return (NULL);
	}
	new_letter_ptr = new_str;
	index = 0;
	while (src[index] != '\0')
	{
		new_letter_ptr[index] = src[index];
		index++;
	}
	new_letter_ptr[index] = '\0';
	return (new_str);
}
