#include "my_vector.h"
void otherPrintVector(vector<int> d){
  if(d.empty()) cout <<"vectory is empty" << endl <<"null";//test if the vector is empty
  for(int i = 0; i < d.size(); i++) cout << d[i] << " " ; //use a for loop to iterate
  cout << endl;
}
void printVector(vector<int> d){
  if(d.empty()) cout <<"vectory is empty" << endl <<"null"; //print null if vector is empty
  else for(auto i:d) cout << i << " "; //print element with a for each loop
  cout << endl; //output a new line
}
