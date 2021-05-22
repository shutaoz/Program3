//
// Created by Shutao on 5/21/2021.
//

get(int x, int y){
    return sudoku[x][y].getValue();
}

set(int x, int y, int uValue){
    sudoku[x][y] = uValue;
}