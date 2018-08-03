/*
** EPITECH PROJECT, 2018
** putstr
** File description:
** putstr
*/

int	my_putchar(char c);

int	my_putstr(char *str)
{
	int i = 0;

	while (*str != '\0') {
		my_putchar(*str);
		str++;
	}
	return (0);
}
