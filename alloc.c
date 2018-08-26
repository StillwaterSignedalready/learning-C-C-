#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *intPtr;
    // intPtr = (int *) calloc(sizeof (int), 1000);
    intPtr = (int *) malloc(1000 * sizeof (int));
}