#ifndef MYFUNC_H //if the prepocessor not define
#define MYFUNC_H //then define the directive 
#include <iostream> //input and output
#include <string.h>
//overloading the swap function
void swap(int &x, int & y);
void swap(std::string &x, std::string &y);
void swap(double &x, double &y);
//defualt function
double pow(double x = 0 , int y = 1 );
//function prototype
double powIter(double , int );
//use const keyword and iterate over the array
void for_loop( const std::string a[], int size);
#endif
