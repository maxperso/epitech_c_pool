/*
** EPITECH PROJECT, 2022
** my_find_solution
** File description:
** print a solution of rush3's project
*/

#include "../include/rush3.h"
#include "../include/my.h"

static int my_find_solution_sup(int x, int y, rush3_t *r)
{
    char *str = malloc(sizeof(char) * 6);

    str[0] = r->a1;
    str[1] = r->a2;
    str[2] = r->a3;
    str[3] = r->a4;
    str[4] = r->h;
    str[5] = r->v;
    str[6] = '\0';
    if (my_strcmp(str, "oooo-|") == 0)
        mini_printf("[rush1-1] %i %i\n", x, y);
    if (my_strcmp(str, "/\\\\/**") == 0)
        mini_printf("[rush1-2] %i %i\n", x, y);
    if (my_strcmp(str, "AACCBB") == 0)
        mini_printf("[rush1-3] %i %i\n", x, y);
    if (my_strcmp(str, "ACACBB") == 0)
        mini_printf("[rush1-4] %i %i\n", x, y);
    if (my_strcmp(str, "ACCABB") == 0)
        mini_printf("[rush1-5] %i %i\n", x, y);
    return (0);
}

static int my_find_solution_lign(int x, int y, rush3_t *r)
{
    if (x == 1) {
        if (r->a1 == 'o' && (r->v == '|' || r->v == 0) && r->a3 == 'o')
            mini_printf("[rush1-1] %i %i\n", x, y);
        if (r->a1 == '*' && (r->v == '*' || r->v == 0) && r->a3 == '*')
            mini_printf("[rush1-2] %i %i\n", x, y);
        if (r->a1 == 'B' && (r->v == 'B' || r->v == 0) && r->a3 == 'B')
            mini_printf("%s %i %i || %s %i %i || %s %i %i\n",
            "[rush1-3]", x, y, "[rush1-4]", x, y, "[rush1-5]", x, y);
    }
    if (y == 1) {
        if (r->a1 == 'o' && (r->h == '-' || r->h == 0) && r->a2 == 'o')
            mini_printf("[rush1-1] %i %i\n", x, y);
        if (r->a1 == '*' && (r->h == '*' || r->h == 0) && r->a2 == '*')
            mini_printf("[rush1-2] %i %i\n", x, y);
        if (r->a1 == 'B' && (r->h == 'B' || r->h == 0) && r->a2 == 'B')
            mini_printf("%s %i %i || %s %i %i || %s %i %i\n",
            "[rush1-3]", x, y, "[rush1-4]", x, y, "[rush1-5]", x, y);
    }
    return (0);
}

static int my_find_solution_point(int x, int y, rush3_t *r)
{
    if (r->a1 == 'o')
        mini_printf("[rush1-1] %i %i\n", x, y);
    if (r->a1 == '*')
        mini_printf("[rush1-2] %i %i\n", x, y);
    if (r->a1 == 'B')
        mini_printf("%s %i %i || %s %i %i || %s %i %i\n",
        "[rush1-3]", x, y, "[rush1-4]", x, y, "[rush1-5]", x, y);
    return (0);

}

static int my_find_solution_2(int x, int y, rush3_t *r)
{
    if (r->a1 == 'o' && r->a2 == 'o' && (r->v == '|' || r->v == 0)
    && (r->h == '-' || r->h == 0) && r->a3 == 'o' && r->a4 == 'o')
        mini_printf("[rush1-1] %i %i\n", x, y);
    if (r->a1 == '/' && r->a2 == '\\' && (r->v == '*' || r->v == 0)
    && (r->h == '*' || r->h == 0) && r->a3 == '\\' && r->a4 == '/')
        mini_printf("[rush1-2] %i %i\n", x, y);
    if (r->a1 == 'A' && r->a2 == 'A' && (r->v == 'B' || r->v == 0)
    && (r->h == 'B' || r->h == 0) && r->a3 == 'C' && r->a4 == 'C')
        mini_printf("[rush1-3] %i %i\n", x, y);
    if (r->a1 == 'A' && r->a2 == 'C' && (r->v == 'B' || r->v == 0)
    && (r->h == 'B' || r->h == 0) && r->a3 == 'A' && r->a4 == 'C')
        mini_printf("[rush1-4] %i %i\n", x, y);
    if (r->a1 == 'A' && r->a2 == 'C' && (r->v == 'B' || r->v == 0)
    && (r->h == 'B' || r->h == 0) && r->a3 == 'C' && r->a4 == 'A')
        mini_printf("[rush1-5] %i %i\n", x, y);
    return (0);
}

int my_find_solution(int x, int y, rush3_t *r)
{
    if (x > 2 && y > 2)
        return (my_find_solution_sup(x, y, r));
    if (x >= 2 && y >= 2)
        return (my_find_solution_2(x, y, r));
    if (x == 1 && y == 1)
        return (my_find_solution_point(x, y, r));
    if ((x == 1 && y > 1) || (x > 1 && y == 1))
        return (my_find_solution_lign(x, y, r));
    return (84);
}
