/*
** EPITECH PROJECT, 2017
** Utils
** File description:
** Str compare
*/

#include	"pushswap.h"
#include	"utils.h"
#include	<stdlib.h>

int	my_strcmp(const char *s1, const char *s2)
{
	int	i = 0;
	int	j = 0;

	if (s1 == NULL || s2 == NULL)
		return (ERROR);
	while (s1[i] != END && s2[j] != END) {
		if (s1[i] != s2[j])
			return (s1[i] - s2[j]);
		i++;
		j++;
	}
	return (ERROR);
}
