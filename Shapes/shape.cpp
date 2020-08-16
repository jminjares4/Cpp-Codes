/*
Author: Jesus Minjares BSEE
C++ App:
    Create a header file that hold structures of shapes.
    And create a namespace that conduct the area, perimeter,
    and prints information of the structures.
*/
#include <iostream> //cout and cin
#include "util.h" //area, perimeters
int main(){
  //intialize the shapes
  Rectangle rec = {.length = 3, .width = 2};
  Square square = {.length = 3};
  Circle circle = {.radius = 3.4, .diameter = 6.8};
  R_Triangle triangle = {.height = 3.4, .base = 3};
  Hexagon hexagon = {.side_a = 3};
  Pentagon pentagon = {.side_a = 4};
  //print the shapes
  std::cout <<"---PRINTING THE SHAPES---" << std::endl;
  //print with the overloading functions
  util::print(rec);
  util::print(square);
  util::print(circle);
  util::print(triangle);
  util::print(hexagon);
  util::print(pentagon);
  //demostrate how to use the namespace util::
  std::cout << "Area of circle: " << util::area(circle) << std::endl;
  //demostrate how to use the namespace util::
  std::cout << "Perimieter of the right triangle: "
            << util::perimeter(triangle) << std::endl;
}
