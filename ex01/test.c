#include <assert.h>
#include <stddef.h>

int		*ft_range(int min, int max);

void	test_invalid(void)
{
	assert(NULL == ft_range(10, 9));
}

void	test_small(void)
{
	int	*result;
	int	min;
	int	max;

	min = 0;
	max = 2;
	result = ft_range(min, max);
	assert(NULL != result);
	for (int i = 0; i < max - min; i++)
	{
		assert(result[i] == min + i);
	}
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
}

int	main(void)
{
	test_invalid();
	test_small();
	test_same();
}
