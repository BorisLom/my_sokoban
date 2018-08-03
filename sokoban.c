
/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** sokoban
*/

#include "../include/sokoban.h"

void	errors(char *buff)
{
	while (*buff != '\0')
	{
		if (*buff == 'P' || *buff == 'X' || *buff == '#'\
		    || *buff == 'O' || *buff == '\n' || *buff == ' ')
			buff++;
		else
			exit (84);
	}
}

int	map(int ac, char **av)
{
	int ch = 0;
	int length = 0;
	int opn;
	char buff[30000];
	int *memory;
	int rd;

	memory = malloc(sizeof(int) *100);
	opn = open(av[1], O_RDONLY);
	rd = read(opn, buff, 30000 - 1);
	if (rd == -1)
		exit (84);
	errors(buff);
	initscr();
	keypad(stdscr, TRUE);
	o_search(buff, memory, length);
	while (buff[length] != 'P')
		length = length + 1;
	while (ch != 32) {
		clear();
		refresh();
		length = move_player_left(buff, length, ch);
		length = move_player_right(buff, length, ch);
		length = move_player_down(buff, length, ch);
		length = move_player_up(buff, length, ch);
		o_replace(buff, memory);
		printw(buff);
		ch = getch();
	}
	endwin();
	length = move_player_up(buff, length, ch);
	close(opn);
	free(memory);
	return (0);
}

int	main(int ac, char *av[])
{
	if (av[1][0] == '-' && av[1][1] == 'h')
		my_putstr("USAGE\n arrow keys to move\n \
space to leave\n move the X on the O to win\n");
	if (ac != 2)
		return (84);
	map(ac, av);
	return (0);
}
