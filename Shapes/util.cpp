#include "util.h" //call header file
#include <iostream> //std:cout
/*
Area:
Triangle: a*b /2
Circle: PI*radius*radius
Hexagon: (3*sqrt(3)/2)*a*a
Pentagon: 1/4 * sqrt(5(5+2*sqrt(5)))*a*a
Perimeter:
Rectangle: 2h + 2l
Square: 4l
Triangle: a+b + c , c = sqrt(a^2+b^2)
Cirlce: 2*PI*r
HexagonL 6*a
Pentagon: 5*a
*/
//create a namespace call util
namespace util{
  //overload area with different structure
  double area(Rectangle r){  return r.length * r.width;}
  double area(R_Triangle t){ return t.height*t.base * .5;}
  double area(Square s){ return s.length * s.length;}
  double area(Circle c){ return PI*c.radius*c.radius;}
  double area(Hexagon h){ return (3*sqrt(3)*.5)*h.side_a*h.side_a;}
  double area(Pentagon p){return .25*sqrt(5*(5 + 2*sqrt(5)))*p.side_a*p.side_a;}
  //overload the perimieter function
  double perimeter(Rectangle r){ return 2*(r.width + r.length);}
  double perimeter(Square s){ return 4*s.length;}
  double perimeter(R_Triangle t){ return t.height + t.base + sqrt(t.height*t.height + t.base*t.base);}
  double perimeter(Circle c){ return 2*PI*c.radius;}
  double perimeter(Hexagon h){ return 6*h.side_a;}
  double perimeter(Pentagon p){ return 5*p.side_a;}
  //overload the print function, to print the
  //structure members, area and perimeter
  void print(Rectangle r){
    std::cout << "---Rectangle---\n";
    std::cout << "Length: " << r.length << std::endl;
    std::cout << "Width: " << r.width << std::endl;
    std::cout << "Area: " << area(r) << std::endl;
    std::cout << "Perimeter: " << perimeter(r) << std::endl;
  }
  void print(Square s){
    std::cout << "---Square---\n";
    std::cout << "Length: " << s.length << std::endl;
    std::cout << "Area: " << area(s) << std::endl;
    std::cout << "Perimeter: " << perimeter(s) << std::endl;
  }
  void print(Circle c){
    std::cout << "---Circle---\n";
    std::cout << "Radius: " << c.radius << std::endl;
    std::cout << "Diameter: " << c.diameter << std::endl;
    std::cout << "Area: " << area(c) << std::endl;
    std::cout << "Perimeter: " << perimeter(c) << std::endl;
  }
  void print(R_Triangle t){
    std::cout << "---R_Triangle---\n";
    std::cout << "Height: " << t.height << std::endl;
    std::cout << "Base: " << t.base << std::endl;
    std::cout << "Area: " << area(t) << std::endl;
    std::cout << "Perimeter: " << perimeter(t) << std::endl;
  }
  void print(Hexagon h){
    std::cout << "---Hexagon---\n";
    std::cout << "Side_a: " << h.side_a << std::endl;
    std::cout << "Area: " << area(h) << std::endl;
    std::cout << "Perimeter: " << perimeter(h) << std::endl;
  }
  void print(Pentagon p){
    std::cout << "---Pentagon---\n";
    std::cout << "Side_a: " << p.side_a << std::endl;
    std::cout << "Area: " << area(p) << std::endl;
    std::cout << "Perimeter: " << perimeter(p) << std::endl;
  }
}
