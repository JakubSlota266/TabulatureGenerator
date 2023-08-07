#ifndef TAB_GEN_H
#define TAB_GEN_H

#define ROWS 6
#define COLLS 20

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
void showTabalature(char tabs[ROWS][COLLS]);
void loadEmptySheet(char tabs[ROWS][COLLS]);
void placeNoteOnTab(char* tab, notes nameOfString, int numberOfThread);

#endif