#include <stdio.h>
#include "tabGenerator.h"
#include <stdlib.h>

int main()
{
    notes notes;

    printf("Welcome to Tab Generator by Jakub266!\n");
    printf("#######################################\n");

    char tabs[ROWS][COLLS];
    loadEmptySheet(tabs);
    showTabulature(tabs);

    for(int i = 0; i < COLLS - GRAPHICAL_OFFSET; i++)
    {
    placeNoteOnTab(tabs, rand()%6, rand() % 5 + 1);
    }

    showTabulature(tabs);

    return 0;
}