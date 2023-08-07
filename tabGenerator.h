#ifndef TAB_GEN_H
#define TAB_GEN_H

#define ROWS 6
#define COLLS 40

#define INDEX_OF_NOTES 0
#define INDEX_OF_SEPERATION_LINE 1

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
void drawSeparationHashtagLine();

#endif