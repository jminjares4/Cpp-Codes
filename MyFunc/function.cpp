/*
Author: Jesus Minjares BSEE
C++ App:
  The program demostrate the overloading, default setup,
  iterative and recursive functions.
*/
#include <iostream> //input and output
#include <string.h> //string data type
#include "myfunc.h" //call the header file
int main(){
  //intialize x and y
  int x = 5, y =10;
  //intialize first and last name
  std::string first_name = "Jesus", last_name = "Minjares";
  //intialize a and b
  double a = 3.14, b = 3;
  //intialize the string array
  std::string  cars[7] = {
                          "Cuhmaro",
                          "Gaystang",
                          "Challenger",
                          "Fusion",
                          "Tesla",
                          "CORVETTE",
                          "Chingate una bici"
                          };

  swap(x,y); //swap x and y
  swap(first_name, last_name); //swap first and last
  swap(a,b); //swap a and b

  //output the swaps
  std::cout << "x: " << x << " " << "y: " << y << std::endl;
  std::cout << "first_name: " << first_name << " " << "last_name: " << last_name << std::endl;
  std::cout << "a: " << a << " " << "b: " << b << std::endl;

  //demostrate the default function
  std::cout << "2^0 " << pow(2) << std::endl;
  //call the recursive function
  std::cout << "5^5 " << pow(5,5) << std::endl;
  //call the iterative functio to show same output
  std::cout << "5^5 with iterative function " << powIter(5,5) << std::endl;

  //iterate over the area with a forloop
  std::cout << "-----------------FOR_LOOP-----------------------\n";
  for_loop(cars,7);
  std::cout << "-----------------FOR_EACH-----------------------\n";
  //iterate with a for each loop
  for(auto i : cars) std::cout << i << std::endl;

}
