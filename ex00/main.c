#include <assert.h>
#include <string.h>

char	*ft_strdup(char *src);

void	test_empty(void)
{
	char	*str;
	char	*result;

	str = "";
	result = ft_strdup(str);
	assert(result != str);
	assert(strcmp(str, result) == 0);
}

int	main(void)
{
	test_empty();
}
