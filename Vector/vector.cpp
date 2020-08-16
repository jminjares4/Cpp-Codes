/*
Author: Jesus Minjares BSEE
C++ App:
    Create a dynamic array or vector to test it method.
    The program will intialize a int type vector and print
    its respective data.
*/
#include "my_vector.h"
int main(){
  vector<int> data = {1,2,3,4};
  data.push_back(12); //add a 12 at the last elemet
  printVector(data); //print data with the for each loop

  //output the message
  cout << "removing the last element of the vector "
       << "using pop_back()." << endl;
  data.pop_back(); //remove the last element
  printVector(data); //print the vector
  otherPrintVector(data);
  data.clear(); //delete all elements
  printVector(data); //output the vector
}
