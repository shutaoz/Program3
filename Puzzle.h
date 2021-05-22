// Puzzle.h
// Created by Shutao on 5/21/2021.
// 1978017
// class declaration file for the Puzzle class
// The Puzzle class has a getter that returns the Square object stored at the position and a setter that set the Square object at a location to a value.
// The overloaded << operator operates on a Puzzle object and displays the all the Square objects the puzzle holds.
// The solve method will use the set method when filling out the puzzle.

#ifndef PROGRAM3_PUZZLE_H
#define PROGRAM3_PUZZLE_H

#include "cstdlib"
#include "Square.h"
#include "iostream"

using namespace std;

class Puzzle{
private:
    //an array of Square objects
    Square sudoku[9][9];

public:
    //constructor
    //fills the 2D array with integers
    Puzzle(int intString[9][9]);

    //getter that returns the value_ stored in a square at a location
    int get(int x, int y);

    //setter that sets the values to a Square object stored at a location
    void set(int x, int y, int uValue);

    //check to see if num is present in a collum
    bool isPresentInCol(int col, int num);

    //check to see if num is present in a row
    bool isPresentInRow(int row, int num);

    //check to see if num is present inside the puzzle
    bool isPresentInBox(int boxStartRow, int boxStartCol, int num);

    //find an empty place for insertion
    bool findEmptyPlace(int &row, int &col);

    //check to see if the place is a valid place for insertion
    bool isValidPlace(int row, int col, int num);

    //solve the sudoku based on the rules
    bool solveSudoku();

    //display the entire puzzle. to be called inside the overloaded operator
    friend ostream &operator<<( ostream &output, Puzzle &P ){
        for (int row = 0; row < 9; row++){
            for (int col = 0; col < 9; col++){
                if(col == 3 || col == 6)
                    cout << " | ";
                cout << P.get(row, col) <<" ";
            }
            if(row == 2 || row == 5){
                cout << endl;
                for(int i = 0; i < 9; i++)
                    cout << "---";
            }
            cout << endl;
        }
    }



};

#endif //PROGRAM3_PUZZLE_H
