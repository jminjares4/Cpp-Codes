//Author: Jesus Minjares BSEE
#include "array_template.h" //header file
//store function into namespace
namespace array_func{
  //generic function to get the max value of an array
  template <typename T>
  T max(T x[], int size){
    T max = x[0];
    for(int i = 1; i < size; i++)
      if(x[i] > max) max = x[i];
    return max;
  }
  //generic function to get the min value of an array
  template <typename T>
  T min(T x[], int size){
    T min = x[0];
    for(int i = 1; i < size; i++)
      if(x[i] < min) min = x[i];
    return min;
  }
  //generic function to get the max index value of an array
  template <typename T>
  T maxIndex(T x[], int size){
    int max = 0;
    for(int i = 1; i < size; i++)
      if(x[i] > x[max]) max = i;
    return max;
  }
    //generic function to get the min index value of an array
  template <typename T>
  T minIndex(T x[], int size){
    int min = 0;
    for(int i = 1; i < size; i++)
      if(x[i] < x[min]) min = i;
    return min;
  }
    //generic function to get the average value of an array
  template <typename T>
  double average(T x[], int size){
    double sum =0;
    for(int i =0; i < size; i++) sum += x[i];
    return static_cast<double>(sum/size);
  }
    //generic function to print array 
  template <typename T>
  void print(T x[], int size){
    for(int i = 0; i < size; i++) std::cout << x[i] << " ";
    std::cout << std::endl;
    for(int i =0; i < size; i++) std::cout << i << " ";
    std::cout << std::endl << "Max value: " << max(x,size) << std::endl;
    std::cout << "Max index: " << maxIndex(x,size) << std::endl;
    std::cout << "Min value: " << min(x, size) << std::endl;
    std::cout << "Min index: " << minIndex(x, size) << std::endl;
    std::cout << "Mean: " << average(x,size) << std::endl;
  }
}
