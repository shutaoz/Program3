// Puzzle.cpp
// Created by Shutao on 5/21/2021.
// 1978017
// class implementation file for the Puzzle class

#include "Puzzle.h"

Puzzle::Puzzle(int (*intString)[9]) {
    for(int i = 0; i < 9; ++i)
        for (int j = 0; j < 9; ++j) {
            sudoku[i][j].setValue(intString[i][j]);
        }
}

int Puzzle::get(int x, int y) {
    return sudoku[x][y].getValue();
}

void Puzzle::set(int x, int y, int uValue) {

    sudoku[x][y].setValue(uValue);
}

bool Puzzle::isPresentInCol(int col, int num) {
    for (int row = 0; row < 9; row++)
        if (sudoku[row][col].getValue() == num)
            return true;
    return false;
}

bool Puzzle::isPresentInRow(int row, int num) {
    for (int col = 0; col < 9; col++)
        if (sudoku[row][col].getValue() == num)
            return true;
    return false;
}

bool Puzzle::isPresentInBox(int boxStartRow, int boxStartCol, int num) {
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (sudoku[row+boxStartRow][col+boxStartCol].getValue() == num)
                return true;
    return false;
}

bool Puzzle::findEmptyPlace(int &row, int &col) {
    for (row = 0; row < 9; row++)
        for (col = 0; col < 9; col++)
            if (sudoku[row][col].getValue() == 0) //marked with 0 is empty
                return true;
    return false;
}

bool Puzzle::isValidPlace(int row, int col, int num) {
    return !isPresentInRow(row, num) && !isPresentInCol(col, num) && !isPresentInBox(row - row%3 ,col - col%3, num);
}

bool Puzzle::solveSudoku() {
    int row, col;
    if (!findEmptyPlace(row, col))
        return true; //when all places are filled
    for (int num = 1; num <= 9; num++){ //valid numbers are 1 - 9
        if (isValidPlace(row, col, num)){ //check validation, if yes, put the number in the grid
            sudoku[row][col].setValue(num);
            if (solveSudoku()) //recursively go for other rooms in the grid
                return true;
            sudoku[row][col].setValue(0); //turn to unassigned space when conditions are not satisfied
        }
    }
    return false;
}
