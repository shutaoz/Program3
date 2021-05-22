//
// Created by Shutao on 5/21/2021.
// BQG4653

#ifndef PROGRAM3_PUZZLE_H
#define PROGRAM3_PUZZLE_H

#include "cstdlib"

using namespace std;

class Puzzle{
private:
    //an array of Square objects
    Square sudoku[][];

public:
    //constructor
    //fills the 2D array with integers
    Puzzle(String integers);

    //getter that returns the value_ stored in a square at a location
    int get(int x, int y);

    //setter that sets the values to a Square object stored at a location
    void set(int x, int y, int uValue);

    //solve function that determine if a function is solvable
    //the function returns true if the solve function returns true
    bool solvable();

    //solve the Puzzle using backtracking
    bool solve();

    //display the entire puzzle. to be called inside the overloaded operator


};

#endif //PROGRAM3_PUZZLE_H
