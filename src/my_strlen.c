/*
** EPITECH PROJECT, 2017
** mystrlen
** File description:
** 
*/

int     my_strlen(char const *str)
{
        int     i;

        i = 0;
        while(str[i] != '\0') {
        i += 1;
        }
	return(i);
}	
