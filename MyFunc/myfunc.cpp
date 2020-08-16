#include "myfunc.h"
//const state that the datatype can not be alterd
void for_loop(const std::string a[], int size){
  //iterate over the size
  for(int i = 0; i < size; i++) std::cout << a[i] << std::endl;
}
double powIter(double x, int y){
  //set result as 1
  double result = 1;
  //iterate over the exponent
  for(int i = 1; i <= y; i++) result *= x;
  return result;
}
double pow(double x, int y )
{
  if(y <= 0) return 1; //if ^0 then return 1
  //else call recursively the function x^y * x^y-1 ....x^0
  else  return x*pow(x,y-1);
}
//pass by reference
void swap(int &x, int & y){
  //set temp as x
  int temp = x;
  //load y to x
  x = y;
  //load temp to y
  y = temp;
}
//pass by reference
void swap(std::string &x, std::string &y){
  //set temp as x
  std::string temp = x;
  //load y to x
  x = y;
  //load temp to y
  y = temp;
}
//pass by reference
void swap(double &x, double &y){
  //set temp as x
  double temp = x;
  //load y to x
  x = y;
  //load temp to y
  y = temp;
}
