// wildcmp.h
#ifndef WILDCMP_H
#define WILDCMP_H

int wildcmp(char *s1, char *s2);

#endif

// main.c
#include <stdio.h>
#include "wildcmp.h"

int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    // Rest of the code

    return 0;
}

int wildcmp(char *s1, char *s2)
{
    // Function implementation
}
