/*
** EPITECH PROJECT, 2018
** Src
** File description:
** main
*/

#include	"utils.h"
#include	"linked.h"
#include	"pushswap.h"
#include	<stdlib.h>
#include	"swap.h"
#include	"sort.h"

int		main(int argc, char **argv)
{
	t_list		*la = NULL;
	t_list		*lb = NULL;
	int		flag = 0;

	if (argc == 1) {
		my_putchar(NEW_LINE);
		return (C_EXIT_ERROR);
	}
	if (check_sorted(argv) != SORTED &&
		init_linkedlist(argv, &la) == SUCCESS) {
		flag = check_flag(argv);
		sort_list(&la, &lb, flag);
		my_putchar(NEW_LINE);
	} else {
		my_putchar(NEW_LINE);
		return (EXIT_SUCCESS);
	}
	free(la);
	free(lb);
	return (EXIT_SUCCESS);
}