/*
** EPITECH PROJECT, 2017
** objectives.c
** File description:
** O related functions
*/

void	o_search(char *buff, int *memory, int length)
{
	int j = 0;

	while (buff[length] != '\0') {
		if (buff[length] == 'O') {
			memory[j] = length;
			j = j + 1;
		}
		length = length + 1;
	}
}

int	o_replace(char *buff, int *memory)
{
	int nb = 0;
	int length = 0;
		
	while (buff[length] != '\0') {
		if (length == memory[nb]) {
			nb = nb + 1;
		}
		if (buff[memory[nb]] == ' ') {
			buff[memory[nb]] = 'O';
		}
		length = length + 1;
	}
	return (0);
}
