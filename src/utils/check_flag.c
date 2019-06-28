/*
** EPITECH PROJECT, 2018
** check flag arg
** File description:
** detect flag -v
*/

#include	"utils.h"
#include	<stdlib.h>
#include	"pushswap.h"

int		check_flag(char **argv)
{
	int		i = 0;

	while (argv[i] != NULL) {
		if (my_strcmp(argv[i], FLAG) == 0)
			return (SUCCESS);
	i++;
	}
	return (ERROR);
}