#ifndef TAB_GEN_H
#define TAB_GEN_H

#define ROWS 6
#define COLLS 20
#define GRAPHICAL_OFFSET 2
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
void showTabulature(char tabs[ROWS][COLLS]);
void loadEmptySheet(char tabs[ROWS][COLLS]);
void placeNoteOnTab(char tabs[ROWS][COLLS], notes nameOfString, int numberOfThread);

#endif