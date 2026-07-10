#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		strlen;
	char	*letter_ptr;

	letter_ptr = src;
	strlen = 0;
	while (*letter_ptr)
	{
		strlen++;
		letter_ptr++;
	}
	new_str = malloc(sizeof(char) * strlen);
	letter_ptr = src;
	while (*letter_ptr)
	{
		*new_str = *letter_ptr;
		letter_ptr++;
	}
	return (new_str);
}
