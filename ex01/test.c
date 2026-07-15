#include <assert.h>
#include <limits.h>
#include <stddef.h>

int		*ft_range(int min, int max);

void	test_invalid(void)
{
	assert(NULL == ft_range(9 + 1, 9));
}

void	test_small(void)
{
	int	*result;
	int	min;
	int	max;

	min = 0;
	max = min + 2;
	result = ft_range(min, max);
	assert(NULL != result);
	for (int i = 0; i < max - min; i++)
	{
		assert(result[i] == min + i);
	}
	free(result);
}

void	test_same(void)
{
	int	*result;
	int	min;
	int	max;

	min = 9;
	max = min;
	result = ft_range(min, max);
	assert(NULL == result);
	free(result);
}

void	test_medium_cross_negative(void)
{
	int	*result;
	int	min;
	int	max;

	min = -42;
	max = 10;
	result = ft_range(min, max);
	assert(NULL != result);
	for (int i = 0; i < max - min; i++)
	{
		assert(result[i] == min + i);
	}
	free(result);
}

void	test_large(void)
{
	int	*result;
	int	min;
	int	max;

	min = INT_MIN + 10;
	max = 2;
	result = ft_range(min, max);
	assert(NULL != result);
	for (int i = 0; i < max - min; i++)
	{
		assert(result[i] == min + i);
	}
	free(result);
}

int	main(void)
{
	test_invalid();
	test_small();
	test_same();
	test_medium_cross_negative();
	test_large();
}
