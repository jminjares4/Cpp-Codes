/*
Author: Jesus Minjares BSEE
*/
#ifndef FUNCTION_H
#define FUNCTION_H
#include <iostream>
//create a namespace to avoid conflictions
namespace myTemp{
  //template functions to swap datatypes
  template <typename T> void swap(T &x, T &y);
  template <typename T> void swap(T x[], T y[], int size);
  //template functions to print
  template <typename T>  void print(T x);
  template <typename T> void print(T x, T y);
  template <typename T> void printArray(T x[], int size);
}
#endif
