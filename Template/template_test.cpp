/*
Author: Jesus Minjares BSEE
C++ App:
    The purpose of this code is to practice the use of templates.
    Templates are use to create generic function/class to avoid
    using overload if applicable. In the code, it demostrate
    the use of swap, and print, printArray. 
*/
#include <iostream>//cout
#include <string.h> //std::string
#include "function.h" //for the template functions
#include "function.cpp" //must include to avoid linking problems
int main(){
  std::cout << "Printing...\n"; //prompt message
  //set values for different datatypes
  int x =6, y = 10;
  char a = 'a', b = 'b';
  double num1 = 3.2341, num2 = 4.543;
  std::string first = "Jesus";
  std::string last = "Minjares";
  float fnum1 = 12.313F, fnum2 = 93.234F;

  //set value for differetn datatypes arrays
  int intArray[] = {1,233,4,4,3,3,2};
  char charArray[] = {'a','b', 'c', 'd', 'e','f'};
  double doubleArray[] = {1.23421,1342.3424,323.2983287,986.65634,263.37842};
  std::string names[] ={"Jesus", "Jorge", "Juan", "Carlos", "James", "JESUS+MINJARES"};
  float floatArray[] = {2.32,23,423,23,42.22,34.2342,3,432.234};

  /*
  Using the namespace created in the header and .cpp file.
  To use the methods, you must use the scope operator to
  access such functions. If functions do not overload
  with another class or namespace then you cna use the
  using namespace name, to avoid using the name::
  */
  //use the template function to swap values
  myTemp::swap(x,y);
  myTemp::swap(a,b);
  myTemp::swap(num1,num2);
  myTemp::swap(first,last);
  myTemp::swap(fnum1,fnum2);

  //use the template function to print 2 same datatypes
  myTemp::print(x,y);
  myTemp::print(a,b);
  myTemp::print(num1,num2);
  myTemp::print(first,last);
  myTemp::print(fnum1, fnum2);

  //use the template function to print the different type of arrays
  myTemp::printArray(intArray, sizeof(intArray)/sizeof(int));
  myTemp::printArray(charArray, sizeof(charArray)/sizeof(char));
  myTemp::printArray(doubleArray, sizeof(doubleArray)/sizeof(double));
  myTemp::printArray(floatArray,sizeof(floatArray)/sizeof(float));
  myTemp::printArray(names, sizeof(names)/sizeof(names[0]));
}
