/*
Author: Jesus Minjares BSEE
C++ App:
  The purpose of this program is to use
  predirective in C++. Use the macro to create functions
  and clean code.
*/
#include <iostream> //cout and cin
#include "macro.h" //to use the macros
//template to read any data type repetive
template <typename... T>
void read(T& ... args){
  cout << "Enter sequence...";
  ((cin >>args),...);
}
//template to write any data type repetive
template <typename...T>
void write(T & ... args){
  ((cout <<args << " "),...);
  cout << endl;
}
int main(){

  //create variables
  int x,y,z;
  //load values to the variables
  cout << "Enter three integers\n";
  read(x,y,z);
  //print values
  write(x,y,z);
  write("Jesus", "is an electrical", "and computer engineer!");

  //demostrate the debs macro
  string name("Jesus Minjares");
  double pi(3.14159);
  debs(name);
  debs(pi);

  //demostrate the use of the macros
  cout << "addition: " << add(3,4) << endl;
  cout << "subtraction: " << sub(5,-1) << endl;
  cout << "multiplication: " << multi(4.532,6)<< endl;
  cout << "get max of (4,6): " << getmax(4,6) << endl;
  cout << "get min of (-1,-124): " << getmin(-1,-124) << endl;
  cout << "ABS of -864: " << ABS(-864) << endl;

  //create variables to print iterate over the loop
  int i, n;
  //pass the reference of i
  fo(i, 5) cout << i << " "; //print from 0 to 5
  cout << endl;
  //print the number 0-5 is even or not
  fo(i, 5){
    cout << even(i);
    cout << " ";
  }
  cout << endl;
  //test the odd macro
  fo(i, 5){
    cout << odd(i);
    cout << " ";
  }

}
