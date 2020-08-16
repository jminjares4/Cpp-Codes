#include "shapes.h"//call header file
//overload functions
double area(double length, double width){return length*width;}
double area(double length){return length * length;}
double area(Rectangle myRec){return myRec.length * myRec.width;}
double area(struct Square mySquare){return mySquare.length*mySquare.length;}
//overload the perimeter
double perimeter(Square mySquare){ return 4*mySquare.length;}
double perimeter(Rectangle myRectangle){ return 2*(myRectangle.width + myRectangle.length);}
//over loading print function
void print(Square mySquare){
    cout << "Square length: " << mySquare.length << endl;
    cout << "Area: " << area(mySquare) << endl;
    cout << "Perimeter: " << perimeter(mySquare) << endl;
}
void print(Rectangle myRectangle){
  cout << "Rectangle length: " << myRectangle.length << endl;
  cout << "Rectangle width: " << myRectangle.width << endl;
  cout << "Area: " << area(myRectangle) << endl;
  cout << "Perimeter: " << perimeter(myRectangle) << endl;
}
void print(){
  cout << "---------------------------" << endl;
}
