#ifndef INVENTORY_FUNC_H
#define INVENTORY_FUNC_H
#include <iostream> //input and output
#include <string.h> //string
#include <vector> //vector
#include <iomanip> //formatting
#include <fstream> //ofstream and ifstream
using namespace std; //std::
struct Car{ //car Structure that hold it attributes
  string model;
  string manufacture;
  int doors;
  int year;
  bool manual;
  double price;
};
void menu();
//delete an element and return the update vector
vector<Car> removingIndex(vector<Car> , int );
//print the vector
void print(vector<Car> );
//print the model
void printModel(vector<Car>);
//print the price
void printPrice(vector<Car>);
//print the name
void print(string );
//print the struture
void print(Car );
//print the model as a list
void print(string,int);
//print the price as a list
void print(string,double,int);
//load the update inventory to the file
int loadInventory(vector<Car>, string );

#endif
