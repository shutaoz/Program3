// Square.h
// Created by Shutao on 5/21/2021.
// 1978017
// class declaration file for the Square class


#ifndef PROGRAM3_SQUARE_H
#define PROGRAM3_SQUARE_H

#include "cstdlib"

using namespace std;

class Square{
private:
    int value_;

public:
    //constructor
    Square();

    //set value_ to the value passed in
    void setValue(int uValue);

    //return value_ stored
    int getValue();




};



#endif //PROGRAM3_SQUARE_H
