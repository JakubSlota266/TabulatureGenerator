#include "tabGenerator.h"
#include <stdio.h>
#include "Windows.h"

char changeEnumToChar(notes nameOfString)
{
    switch(nameOfString)
    {
    case E:
        return 'E';
    case A:
        return 'A';
    case D:
        return 'D';
    case G:
        return 'G';
    case B:
        return 'B';
    case E_low:
        return 'E';
    default:
        return '*';
    }
}

char changeNumToChar(int num)
{
    switch(num)
    {
        case 1:
            return '1';
        case 2:
            return '2';
        case 3:
            return '3';
        case 4:
            return '4';
        case 5:
            return '5';
        default:
            return '*';
    }
}

void showTabulature(char tabs[ROWS][COLLS])
{
    for (int i = 0; i < ROWS; i++)
    {
      for (int j = 0; j < COLLS; j++)
      {
        printf("%c ", tabs[i][j]);
      }
      printf("\n");
    }
    printf("#######################################\n");
} 

void loadEmptySheet(char tabs[ROWS][COLLS])
{
    for(notes nameOfString = 0; nameOfString < ROWS; nameOfString++)
    {
        for(int j = 0; j < COLLS; j++)
        {
            if(j == 0)
            {
                tabs[nameOfString][j] = changeEnumToChar(nameOfString);
            }
            else if(j == 1)
            {
                tabs[nameOfString][j] = '|';
            }
            else
            {
                tabs[nameOfString][j] = '-';
            }
        }
    }
}

void placeNoteOnTab(char tabs[ROWS][COLLS], notes nameOfString, int numberOfThread)
{
    static int index = GRAPHICAL_OFFSET;
    tabs[nameOfString][index++] = changeNumToChar(numberOfThread);
}