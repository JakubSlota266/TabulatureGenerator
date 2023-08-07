#include "tabGenerator.h"
#include <stdio.h>


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

void showTabalature(char tabs[ROWS][COLLS])
{
    for (int i = 0; i < ROWS; i++)
    {
      for (int j = 0; j < COLLS; j++)
      {
        printf("%c ", tabs[i][j]);
      }
      printf("\n");
    }
} 

void loadEmptySheet(char tabs[ROWS][COLLS])
{
    for(notes nameOfString; nameOfString < ROWS; nameOfString++)
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

void placeNoteOnTab(char* tab, notes nameOfString, int numberOfThread)
{

}