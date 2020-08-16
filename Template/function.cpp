/*
Author: Jesus Minjares BSEE
*/
#include <iostream> //std::cout
#include "function.h" //call the function header
//create namespace to avoid conflictions
namespace myTemp{
  //create tempalte function to swap datatypes
  template <typename T>
  void swap(T &x, T &y){
    T temp = x;
    x = y;
    y = temp;
  }
  //create template to swap arrays
  template <typename T>
  void swap(T x[], T y[], int size){
    for(int i = 0; i < size; i++){
      T temp = x[i];
      x[i] = y[i];
      y[i] = temp;
    }
  }
  //template to print single datatype
  template <typename T>
  void print(T x){
    std::cout << x << " " << std::endl;
  }
  //template to print 2 datatype
  template <typename T>
  void print(T x, T y){
    std::cout << x << " " << y << std::endl;
  }
  //template to an array of type T
  template <typename T>
  void printArray(T x[], int size){
    for(int  i = 0; i < size; i++){
      std::cout << x[i] << " ";
    }
    std::cout << std::endl;
  }
}
