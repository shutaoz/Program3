//
// Created by Shutao on 5/21/2021.
// BQG4653

#ifndef PROGRAM3_PUZZLE_H
#define PROGRAM3_PUZZLE_H

#include "cstdlib"
#include "Square.h"

using namespace std;

class Puzzle{
private:
    //an array of Square objects
    Square sudoku[9][9];

public:
    //constructor
    //fills the 2D array with integers
    Puzzle(String integers);

    //getter that returns the value_ stored in a square at a location
    int get(int x, int y);

    //setter that sets the values to a Square object stored at a location
    void set(int x, int y, int uValue);

    bool isPresentInCol(int col, int num);

    bool isPresentInRow(int row, int num);

    bool isPresentInBox(int boxStartRow, int boxStartCol, int num);

    bool findEmptyPlace(int &row, int &col);

    bool isValidPlace(int row, int col, int num);

    bool solveSudoku();

    //display the entire puzzle. to be called inside the overloaded operator


};

#endif //PROGRAM3_PUZZLE_H
