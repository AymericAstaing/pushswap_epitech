/*
** EPITECH PROJECT  2018
** check superior
** File description:
** check if elnt are superior
*/

#include	"utils.h"
#include	"pushswap.h"
#include	<stdlib.h>

int		is_superior(void *data_1, void *data_2)
{
	if (my_getnbr(data_1) > my_getnbr(data_2))
		return (SUCCESS);
	return (ERROR);
}