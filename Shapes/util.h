#ifndef UTIL_H
#define UTIL_H
#include <iostream>
#include <cmath>
struct Rectangle{
  double length;
  double width;
};
struct Square{
  double length;
};
struct Circle{
  double radius;
  double diameter;
};
struct R_Triangle{
  double height;
  double base;
};
struct Hexagon{
  double side_a;
};
struct Pentagon{
  double side_a;
};
#define PI 3.14159265359
namespace util{
  double area(Rectangle);
  double area(R_Triangle);
  double area(Square);
  double area(Circle);
  double area(Hexagon);
  double area(Pentagon);
  double perimeter(Rectangle);
  double perimeter(Square);
  double perimeter(R_Triangle);
  double perimeter(Circle);
  double perimeter(Hexagon);
  double perimeter(Pentagon);
  void print(Rectangle);
  void print(Square);
  void print(Circle);
  void print(R_Triangle);
  void print(Hexagon);
  void print(Pentagon);
}
#endif
