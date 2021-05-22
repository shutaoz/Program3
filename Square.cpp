// Square.cpp
// Created by Shutao on 5/21/2021.
// 1978017
// The Square class manages an int variable. The get method is a getter that returns the data stored in this Sqaure object.
// The set method sets the int managed to the value passed in.

#include "Square.h"

Square::Square(){
    value_ = 0;

}

void Square::setValue(int uValue) {
    value_ = uValue;

}

int Square::getValue() {
    return value_;
}

