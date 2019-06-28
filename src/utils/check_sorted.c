/*
** EPITECH PROJECT, 2018
** check sorted
** File description:
** check if arg list already sorted
*/

#include	"utils.h"
#include	"pushswap.h"
#include	<stdlib.h>
#include	<stdio.h>

int		check_sorted(char **argv)
{
	int		i = 1;

	if (argv == NULL)
		return (ERROR);
	while (argv[i + 1] != NULL) {
		if (my_getnbr(argv[i]) > my_getnbr(argv[i + 1])) {
			return (ERROR);
		}
	i++;
	}
	return (SUCCESS);
}