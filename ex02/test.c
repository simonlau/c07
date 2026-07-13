#include <assert.h>
#include <limits.h>
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
	assert(range != NULL);
	for (int i = 0; i < max - min; i++)
	{
		assert(range[i] == min + i);
	}
}

void	test_same(void)
{
	int	*range;
	int	min;
	int	max;

	min = 9;
	max = min;
	assert(0 == ft_ultimate_range(&range, min, max));
	assert(NULL == range);
}

void	test_medium_cross_negative(void)
{
	int	*range;
	int	min;
	int	max;

	min = -42;
	max = 15;
	assert(max - min == ft_ultimate_range(&range, min, max));
	assert(range != NULL);
	for (int i = 0; i < max - min; i++)
	{
		assert(range[i] == min + i);
	}
}

void	test_large(void)
{
	int	*range;
	int	min;
	int	max;

	min = INT_MIN + 10;
	max = 2;
	assert(max - min == ft_ultimate_range(&range, min, max));
	assert(range != NULL);
	for (int i = 0; i < max - min; i++)
	{
		assert(range[i] == min + i);
	}
}

int	main(void)
{
	test_invalid();
	test_small();
	test_same();
	test_medium_cross_negative();
	test_large();
}
