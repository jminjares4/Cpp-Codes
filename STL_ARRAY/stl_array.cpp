/*
Author: Jesus Minjares BSEE

C++ App:
    Create a static array from the STL(Standard Template Library) to test it method.
    The program will intialize a int type array and print
    its respective data.
*/
#include <iostream> //input and output
#include <array>
#include "array_func.h"
int main(){
    std::cout << "Using the STL_ARRAY\n"; //output message
    std::array<int,20> myArray = {1,0,4,5}; //intialize the array
    std::cout << "FOR_EACH using auto to iterate over the array\n"; //output message
    for_each(myArray); //print array with a for each loop
    std::cout << "FOR_LOOP using .size() method\n"; //prompt
    for_loop(myArray); //print array with .size()
}
