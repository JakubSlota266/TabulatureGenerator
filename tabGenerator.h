#ifndef TAB_GEN_H
#define TAB_GEN_H

typedef enum guitarStringNotes
{
    E,
    A,
    D,
    G,
    B,
    E_low,
}notes;

char changeEnumToChar(notes nameOfString);
void showTabalature(char* tabs, int rows, int colls);
void placeNoteOnTab(char* tab, notes nameOfString, int numberOfThread);

#endif