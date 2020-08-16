//Author: Jesus Minjares
#ifndef ARRAY_TEMPLATE_H
#define ARRAY_TEMPLATE_H
#include <iostream> //std::cout
//namespace to hold function for the numeric arrays
namespace array_func {
  //prototype functions
  template <typename T> T max(T , int );
  template <typename T> T min(T , int );
  template <typename T> T maxIndex(T , int);
  template <typename T> T minIndex(T, int );
  template <typename T> double average(T , int );
  template <typename T> void print(T , int );
}
#endif
