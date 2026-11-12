#include <stdio.h>

void main(void) {
    int i = 300;

    int *pi = &i;
    char *pc = &i; // This is a pointer to char, but it points to an int variable
    printf("%i, %i, %i\n", i, *pi, *pc);
}