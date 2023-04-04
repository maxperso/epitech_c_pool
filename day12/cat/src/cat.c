/*
** EPITECH PROJECT, 2022
** cat.c
** File description:
** recode bin "cat"
*/

#include "../include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int args(int ac, char **av)
{
    int cpt = 0;

    while (cpt < ac - 1)
        cpt++;
    return (cpt);
}

int opener(int ac, char **av, int cpt)
{
    int fd;
    char buffer[30000];
    int size = 0;

    fd = open(av[cpt], O_RDONLY);
    if (fd == -1) {
        my_putstr("Error: can't open\n");
        return (1);
    }
    size = read(fd, buffer, 30000);
    my_putstr(buffer);
    close(fd);
    return (0);
}

int main(int ac, char **av)
{
    int arg = args(ac, av);
    int cpt = 1;

    for (int i = 0; i < arg; i++) {
        opener(ac, av, cpt);
        cpt++;
    }
    return (0);
}
