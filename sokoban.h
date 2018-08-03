/*
** EPITECH PROJECT, 2017
** c le point h
** File description:
** .h
*/

#include <curses.h>
#include <ncurses.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int	my_strlen(char const *str);
int	move_player_left(char *, int, int);
int	move_player_right(char *, int, int);
int	move_player_down(char *, int, int);
int	move_player_up(char *, int, int);
int	box_move_left(char *, int);
int	box_move_right(char *, int);
int	box_move_down(char *, int);
int	box_move_up(char *, int);
int	o_replace(char *, int *);
int	o_search(char *,int *, int);
