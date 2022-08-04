/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan < gcomlan@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:55:14 by gcomlan           #+#    #+#             */
/*   Updated: 2022/06/10 11:41:31 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int main (void) //  ඞ
{
	int test = 42;
    char *lorem = "Lorem ipsum dolor sit amet,";
    char *nu_ll = "llun";
    char *nule = NULL;

    ft_printf("                                                            Printf Value           Ft_printf Value");
    ft_printf("\n");
    ft_printf("-");
    ft_printf(" ");
    ft_printf("-");
    ft_printf("\n");
    ft_printf("Char no flag:            ");
    ft_printf("d");
    ft_printf("\n");
    ft_printf("String no flag:          lol");
    ft_printf("\n");
    ft_printf("Pointer no flag:         ");
    ft_printf("0x5fd2xbc2d123");
    ft_printf("\n");
    ft_printf("Decimal no flag          ");
    ft_printf("24");
    ft_printf("\n");
    ft_printf("Decimal no flag          ");
    ft_printf("-85");
    ft_printf("\n");
    ft_printf("Uint no flag             ");
    ft_printf("4294967295");
    ft_printf("\n");
    ft_printf("Percent sans flag        ");
    ft_printf("%%");
    ft_printf(" %c",'%');
    ft_printf(" %s","%");
    ft_printf(" %% ");
	ft_printf(" %%  %%  %% ");
    ft_printf("\n");
    ft_printf("-");
    ft_printf(" ");
    ft_printf("-");
    ft_printf("\n");
    ft_printf("Char:                    %c                                     %d                        %d\n", 'c', printf("Char:                    %c\n", 'c'), ft_printf("Char:                    %c\n", 'c'));
    ft_printf("Char:                    %c\n", '0');
    ft_printf("String:                  %s\n", "bonjour");
    ft_printf("String lorem :           %s\n", lorem);
    ft_printf("String Vide:             %s\n", "");
    ft_printf("Pointer:                 %p\n", &test);
    ft_printf("Pointer NULL             %s\n", NULL);
    //ft_printf("Pointer NULL             %p                                     %d                        %d\n", NULL, printf("Pointer NULL             %s\n", NULL), ft_printf("Pointer NULL             %s\n", NULL));
    ft_printf("Pointer INT MAX:         %p\n", INT_MAX);
    ft_printf("Pointer NULL:            %p\n", nule);
    ft_printf("Pointer NULL:            %p                                     %d                        %d\n", nule, printf("Pointer NULL             %s\n", nule), ft_printf("Pointer NULL             %s\n", (void *)0));
    ft_printf("Int:                     %d or %i\n", 45, 54);
    ft_printf("Int 0:                   %d or %i\n", 0, 0);
    ft_printf("Int MIN-MAX:             %i or %d\n", INT_MAX, INT_MIN);
    ft_printf("Uint:                    %u\n", ULONG_MAX);
    ft_printf("Hex lower:               %x\n", 0xa); //a
    ft_printf("Hex lower:               %x\n", 0xabcf012);
    ft_printf("Hex lower:               %x,                                   %d                          %d\n", 0xabcf012, printf("Hex lower:               %x\n", 0xabcf012), ft_printf("Hex lower:               %x\n", 0xabcf012));
    ft_printf("Hex upper:               %X\n", 0xabcf012);
    ft_printf("Percent:                 %%\n");
    ft_printf("v%c%savec%px%d ou %i ou %u, et %p\n", '-', "random", &test, 66 , 7, 41946723, NULL);
	ft_printf("Multiple conv:           %d %u %d %x %d\n", 1, -2, 3, 0xa, 5);
    ft_printf("Multiple same stuff:     %s %s %s %s %s\n", nu_ll, "llun", nu_ll, nu_ll, "llun");
    ft_printf("Pointer NULL             %p\n", NULL);
    printf("Pointer NULL                %p\n", NULL);
    ft_printf("Pointer NULL:            %p\n", (char *)0);
    printf("Pointer NULL:               %p\n", (char *)0);
    ft_printf("Pointer NULL             %s\n", nule);
    printf("Pointer NULL                %s\n", nule);

	return (0);
}

/*
gcc main.c  -L. libftprintf.a -o print

.gitignore
.DS_Store
.vscode/
libftprintf.a
*.o
printfTester/
a.out
*.o
*/
