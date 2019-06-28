/*
** EPITECH PROJECT, 2018
** putchar
** File description:
** display char
*/

#include	"utils.h"
#include	"unistd.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}
