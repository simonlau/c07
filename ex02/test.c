#include <assert.h>
#include <stddef.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

void	test_invalid(void)
{
	int	*range;

	assert(0 == ft_ultimate_range(&range, 10, 9));
	assert(NULL == range);
}

void	test_small(void)
{
	int	*range;
	int	min;
	int	max;

	min = 0;
	max = 4;
	assert(max - min == ft_ultimate_range(&range, min, max));
	for (int i = 0; i < max - min; i++)
	{
		assert(range[i] == min + i);
	}
}

// void	test_same(void)
// {
// 	int	*result;
// 	int	min;
// 	int	max;

// 	min = 9;
// 	max = min;
// 	result = ft_range(min, max);
// 	assert(NULL != result);
// 	assert(result[0] == min);
// }

int	main(void)
{
	test_invalid();
	test_small();
	// test_same();
}
