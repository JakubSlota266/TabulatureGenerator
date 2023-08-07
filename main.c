#include <stdio.h>
#include "tabGenerator.h"

int main()
{
    notes notes;

    printf("Welcome to Tab Generator by Jakub266!\n");
    printf("#####################################\n");

    char tabs[ROWS][COLLS];
    loadEmptySheet(tabs);
    showTabulature(tabs);

    return 0;
}