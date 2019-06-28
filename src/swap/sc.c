/*
** EPITECH PROJECT, 2017
** sc
** File description:
** sa & sb
*/

#include	"swap.h"
#include	"pushswap.h"
#include	<stdlib.h>
#include	"utils.h"

int		sc(t_list **l1, t_list **l2, int flag)
{
	if (sab(l1, l2, flag) == ERROR && sab(l2, l1, flag) == ERROR)
		return (ERROR);
	return (SUCCESS);
}