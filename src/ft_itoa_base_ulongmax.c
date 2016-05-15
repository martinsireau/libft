#include "libft.h"
#define ABS(v) ((v) < 0 ? -(v) : (v))

static void		aux_dix_int(long n, char *ans, int *p)
{
	if (n < -9 || 9 < n)
		aux_dix_int(n / 10, ans, p);
	ans[(*p)++] = '0' + ABS(n % 10);
}

static void		aux_dix(uintmax_t n, char *ans, int *p)
{
	if (9 < n)
		aux_dix(n / 10, ans, p);
	ans[(*p)++] = '0' + ABS(n % 10);
}

static void		aux(uintmax_t n, unsigned int b, char *ans, int *p)
{
	const char *base = "0123456789abcdef";

	if (n >= b)
		aux(n / b, b, ans, p);
	ans[(*p)++] = base[n % b];
}

char			*ft_itoa_base_ulongmax(uintmax_t value, int base)
{
	char	*ans;
	int		p;

	if (base < 2 || 16 < base || !(ans = (char *)malloc(sizeof(char) * 35)))
		return (NULL);
	p = 0;
	if (base == 10 && value < 4294967296)
		aux_dix_int(value, ans, &p);
	else if (base == 10 && value > 4294967296)
		aux_dix((uintmax_t)value, ans, &p);
	else
		aux((uintmax_t)value, (unsigned int)base, ans, &p);
	ans[p] = '\0';
	return (ans);
}
