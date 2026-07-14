#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(int size, char **str, char *sep);

void	test_empty(void)
{
	char	*result;

	result = ft_strjoin(0, NULL, NULL);
	assert(result != NULL);
	assert(0 == strcmp(result, ""));
	free(result);
}

void	test_simple(void)
{
	char	*result;
	char	*names[] = {"ab", "cd", "ef"};

	result = ft_strjoin(3, names, "+-");
	assert(result != NULL);
	assert(0 == strcmp(result, "ab+-cd+-ef"));
	free(result);
}

void	test_one(void)
{
	char	*result;
	char	*names[] = {"X"};

	result = ft_strjoin(1, names, NULL);
	assert(result != NULL);
	assert(0 == strcmp(result, "X"));
	free(result);
}

void	test_two(void)
{
	char	*result;
	char	*names[] = {"ab", "cd"};

	result = ft_strjoin(2, names, "@");
	assert(result != NULL);
	assert(0 == strcmp(result, "ab@cd"));
	free(result);
}

void	test_some_empty(void)
{
	char	*result;
	char	*names[] = {"ab", "", "ef"};

	result = ft_strjoin(3, names, "+-");
	assert(result != NULL);
	assert(0 == strcmp(result, "ab+-+-ef"));
	free(result);
}

int	main(void)
{
	test_empty();
	test_simple();
	test_one();
	test_two();
	test_some_empty();
}
