/*
** EPITECH PROJECT, 2017
** move functions
** File description:
** functions that move stuff
*/

#include "../include/sokoban.h"

int	move_player_left(char *buff, int length, int ch)
{
	if (ch == KEY_LEFT)
	{
		if (buff[length - 1] == '#')
			return (length);
		else if (buff[length - 2] == '#' && buff[length - 1] == 'X')
			return (length);
		else
			length = box_move_left(buff, length);
	}
	return (length);
}

int	move_player_right(char *buff, int length, int ch)
{
	if (ch == KEY_RIGHT)
	{
		if(buff[length + 1] == '#')
			return (length);
		else if (buff[length + 2] == '#' && buff[length + 1] == 'X')
			return (length);
		else
			length = box_move_right(buff, length);
	}
	return (length);
}
int	move_player_down(char *buff, int length, int ch)
{
	int length_line = 0;

	while(buff[length_line] != '\n') {
		length_line = length_line + 1;
	}
	if (ch == KEY_DOWN)
	{
		if (buff[length + 1 + length_line] == '#')
			return (length);
		else if (buff[length + 2 + length_line* 2] == '#' &&
			 buff[length + 1 + length_line] == 'X')
			return (length);
		else
			length = box_move_down(buff, length);
	}
	return (length);
}

int	move_player_up(char *buff, int length, int ch)
{
	int length_line = 0;

	while(buff[length_line] != '\n')
		length_line = length_line + 1;
	if (ch == KEY_UP)
	{
		if (buff[length - length_line - 1] == '#')
			return (length);
		else if (buff[length - 2 - length_line * 2] == '#' &&
			 buff[length - 1 - length_line] == 'X')
			return (length);
		else
			length = box_move_up(buff, length);
	}
	return (length);
}
