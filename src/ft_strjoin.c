#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*sjoin;

	i = 0;
	j = 0;
	k = 0;
	sjoin = malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (sjoin == NULL)
		return (NULL);
	while (s1 && s1[k])
		sjoin[i++] = s1[k++];
	while (s2 && s2[j])
		sjoin[i++] = s2[j++];
	sjoin[i] = '\0';
	return (sjoin);
}
