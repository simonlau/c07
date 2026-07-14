#include <assert.h>
#include <string.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

void	test_binary_to_decimal(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;
	char	*result;

	nbr = "101";
	base_from = "01";
	base_to = "0123456789";
	result = ft_convert_base(nbr, base_from, base_to);
	assert(0 == strcmp("", result));
}

int	main(void)
{
	test_binary_to_decimal();
}
