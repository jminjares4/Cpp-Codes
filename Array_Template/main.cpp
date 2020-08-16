/*
Author: Jesus Minjares BSEE
C++ App:
    The purpose of this code is to use the generic functions
    to print, find the min, max, and the average of the
    numeric value array. The function are located at the
    namespace array_func:: 
*/
#include <iostream> //cout
#include "array_template.h" // to use the array_func:: namespace
#include "array_template.cpp" //to avoid linking problem
using namespace std; //avoid using name::
int main(){
  //intializing differnet array types
  int array[] = {1,2,3,4,5,6,7,0,1,34,2,15};
  double d_array[] = {13.234,-23.365,367.567,-8.5456,4.345,64.4876,393.5436};
  float f_array[] = {3.12,4.345,45.45,-46.453,4.34,76.4,97.53};

  //creating const variable to hold the size of each array
  const int array_size = static_cast<int>(sizeof(array)/sizeof(int));
  const int d_array_size = static_cast<int>(sizeof(d_array)/sizeof(double));
  const int f_array_size = static_cast<int>(sizeof(f_array)/sizeof(float));

  //print the information of the integer array
  //use the array_func namespace to print the array
  cout << "----INTEGER----\n";
  array_func::print(array,array_size);

  cout << "----FLOAT----\n";
  array_func::print(f_array, f_array_size);

  cout << "----DOUBLE----\n";
  array_func::print(d_array, d_array_size);

  //demostrate the usage of the namespace with the different
  //function in the namespace
  cout << "Testing the namespace functions\n";
  cout << "Integer array max value: " << array_func::max(array,array_size) << endl;
  cout << "Float array min value: " << array_func::min(f_array, f_array_size) << endl;
  cout << "Double array average value: " << array_func::average(d_array, d_array_size) << endl;
}
