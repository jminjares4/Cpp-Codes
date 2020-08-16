#include "array_func.h"
void for_loop(std::array<int,20> a){
  for(int i =0; i < a.size(); i++) std::cout << a[i] << " ";//iterate over the size
  std::cout << std::endl;
}
void for_each(std::array<int,20> a){
  for(auto i : a){ //use auto to iterate over the size of the area
    if(i == 0) continue; //when a 0 appears, skip
    std::cout << i << " ";
  }
  std::cout << "\n";
}
