#include "tabGenerator.h"

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

void showTabalature(char* tabs, int rows, int colls)
{
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < colls; j++)
      {
        printf("%c ", *((tabs + i * colls) + j));
      }
      printf("\n");
    }
} 

void placeNoteOnTab(char* tab, notes nameOfString, int numberOfThread)
{

}