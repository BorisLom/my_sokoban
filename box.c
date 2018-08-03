/*
** EPITECH PROJECT, 2017
** box
** File description:
** box moving related functions
*/

#include "../include/sokoban.h"

int	box_move_left(char *buff, int length)
{
	if (buff[length - 1] == 'X' && buff[length - 2] == 'X')
		return (length);
	else if (buff[length - 1] == 'X')
	{
		buff[length] = ' ';
		buff[length - 2] = 'X';
		buff[length - 1] = 'P';
		return (length - 1);
	}
	else
	{
		buff[length] = ' ';
		buff[length - 1] = 'P';
		return (length - 1);
	}
	return (length);
}
int	box_move_right(char *buff, int length)
{
	if (buff[length + 1] == 'X' && buff[length + 2] == 'X')
		return (length);
	else if (buff[length + 1] == 'X')
	{
		buff[length] = ' ';
		buff[length + 2] = 'X';
		buff[length + 1] = 'P';
		return (length + 1);
	}
	else
	{
		buff[length] = ' ';
		buff[length + 1] = 'P';
		return (length + 1);
	}
	return (length);
}

int	box_move_down(char *buff, int length)
{
	int length_line = 0;
	while(buff[length_line] != '\n')
		length_line = length_line + 1;
	if (buff[length + 1 + length_line] == 'X' &&
	    buff[length + 2 + length_line * 2] == 'X')
		return (length);
	else if (buff[length + 1 + length_line] == 'X')
	{
		buff[length] = ' ';
		buff[length + 2 + length_line * 2] = 'X';
		buff[length + 1 + length_line] = 'P';
		return (length + 1 + length_line);
	}
	else
	{
		buff[length] = ' ';
		buff[length + 1 + length_line] = 'P';
		return (length + 1 + length_line);
	}
	return (length);
}

int	box_move_up(char *buff, int length)
{
	int length_line = 0;
	
	while (buff[length_line] != '\n')
		length_line = length_line + 1;
	if (buff[length - 1 - length_line] == 'X' &&
	    buff[length - 2 - length_line * 2] == 'X')
		return (length);
	else if (buff[length - 1 - length_line] == 'X')
	{
		buff[length] = ' ';
		buff[length - 2 - length_line * 2] = 'X';
		buff[length - 1 - length_line] = 'P';
		return (length - 1 - length_line);
	}
	else
	{
		buff[length] = ' ';
		buff[length - 1 - length_line] = 'P';
		return (length - 1 - length_line);
	}
	return (length);
}
