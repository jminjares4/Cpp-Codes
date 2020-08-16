/*
Author: Jesus Minjares BSEE
C++ App:
  Create structures using differnt orienations
  as in c++ there is no need to use struct keyword
  when declaring the instance. Create a rectangle
  and a square, and get the area and perimeter.
*/
#include <iostream> //input and output
#include "shapes.h" //to use Rectangle and Square
using namespace std; //std::
int main(){
  //demostrate different way to declare struct
  struct Rectangle myRectangle = {
                                  .length = 5.4,
                                  .width = 10.3
                                  };
  //in C++ you dont need to use the struct
  Square mySquare;
  //store the value of the length
  mySquare.length = 3.4;
  //print the square
  print(mySquare);
  //print a new line
  print();
  //print the rectangle
  print(myRectangle);
  //print a new line
  print();
}
