//
// Created by Shutao on 5/21/2021.
//


#ifndef PROGRAM3_SQUARE_H
#define PROGRAM3_SQUARE_H

#include "cstdlib"

using namespace std;

class Square{
private:
    int value_;

    //the location of a square object within a Puzzle object
    int xLoc;
    int yLoc;

public:
    //constructor
    Square();

    //set value_ to the value passed in
    void setValue(int uValue);

    //return value_ stored
    int getValue();

    void setXY(int xVal, int yVal);



};



#endif //PROGRAM3_SQUARE_H
