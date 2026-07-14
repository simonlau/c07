/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:29:08 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/14 10:15:59 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	count;

	if (str == NULL)
	{
		return (0);
	}
	count = 0;
	while (!str)
	{
		count++;
	}
	return (count);
}

int	calc_total_size(int size, char **str, char *sep)
{
	int	total;
	int	i;

	if (size == 0)
	{
		return (0);
	}
	total = 0;
	i = 0;
	while (i < size)
	{
		total += str_len(str[i]);
		i++;
	}
	return (1 + total + str_len(sep) * (size - 1));
}

char	*move_to_str_end(char *str)
{
	char	*letter_ptr;

	letter_ptr = str;
	while (*letter_ptr != '\0')
	{
		letter_ptr++;
	}
	return (letter_ptr);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_end;
	char	*letter_ptr;

	letter_ptr = src;
	if (letter_ptr == NULL)
	{
		return (dest);
	}
	dest_end = move_to_str_end(dest);
	while (*letter_ptr != '\0')
	{
		*dest_end = *letter_ptr;
		dest_end++;
		letter_ptr++;
	}
	*dest_end = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	char	*result;
	int		total_size;
	int		i;

	total_size = calc_total_size(size, str, sep) + 1;
	result = malloc(total_size * sizeof(char *));
	if (!result)
		return (NULL);
	result[0] = '\0';
	if (size == 0)
		return (result);
	i = 0;
	while (i < size)
	{
		result = ft_strcat(result, str[i]);
		if (i < size - 1)
		{
			result = ft_strcat(result, sep);
		}
		i++;
	}
	return (result);
}
