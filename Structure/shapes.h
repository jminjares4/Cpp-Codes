#ifndef SHAPES_H
//if not define
#define SHAPES_H
//then define
#include <iostream> //input and output
using namespace std; //std::
struct Rectangle{
  //members of the rectangle
  double length;
  double width;
};
struct Square{
  //memeber of square structure
  double length;
};
//in C++ you can just put the datatype
//and avoid including the variables
//prototype functions
double area(double , double );
double area(double);
double area(Rectangle);
double area(struct Square);
void print(Square);
void print(Rectangle);
void print();
double perimeter(Square);
double perimeter(Rectangle);

#endif
