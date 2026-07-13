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
	assert(result != NULL && str != NULL);
	assert(result[0] == '\0');
}

void	test_normal(void)
{
	char	*str;
	char	*result;

	str = "simon";
	result = ft_strdup(str);
	assert(result != str);
	assert(result != NULL && str != NULL);
	assert(strcmp(str, result) == 0);
}

int	main(void)
{
	test_empty();
	test_normal();
}
