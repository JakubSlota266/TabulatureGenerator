#include <stdio.h>
#include "tabGenerator.h"

int main()
{
    notes notes;

    printf("Welcome to Tab Generator by Jakub266!\n");
    printf("#####################################\n");

    char tabs[6][20];

    for(notes; notes < 6; notes++)
    {
        for(int j = 0; j < 20; j++)
        {
            if(j == 0)
            {
                tabs[notes][j] = changeEnumToChar(notes);
            }
            else if(j == 1)
            {
                tabs[notes][j] = '|';
            }
            else
            {
                tabs[notes][j] = '-';
            }
            
        }
    }
    showTabalature(tabs,6,20);
    return 0;
}