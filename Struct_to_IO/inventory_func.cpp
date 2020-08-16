#include "inventory_func.h"
/*
It requires a vector of Cars and the file name
It will return 0 if everything when as expected
else it will return a -1
*/
int loadInventory(vector<Car> c, string fileName){
  //create an ofstream object to output to the inventory
  ofstream list("inventory.txt");
  //test if the file was open properly
  if(!list){cout << "Error"; return -1;}
  //iterate over the length of the vector
  for(int i = 0; i < c.size(); i++){
    //output to the file
    list << c.at(i).model << endl;
    list << c.at(i).manufacture << endl;
    list << c.at(i).doors << endl;
    list << c.at(i).year << endl;
    list << c.at(i).manual << endl;
    list << c.at(i).price << endl;
    //avoid printing an --- line at the end
    //it will provoke an repeat the last element
    if(i < c.size() - 1) list << "----------" << endl;
  }
  //close file
  list.close();
  //return 0, stating everything went while
  return 0;
}
/*
Requires an vector of type Car, and the index desire to delete
It will use the erase method to eliminate the element
It will return a vector of type car
*/
vector<Car> removingIndex(vector<Car> inventory, int index){
  cout << "deleting " << inventory.at(index).model << endl;
  //offset withd the index at the begining of the vector
  inventory.erase(inventory.begin() + index );
  return inventory; //return the update vector
}
/*
Overloading function to print the vector and structures
*/
void print(vector<Car> inventory){
  //iterate over the vector and call Overloading print
  for(int i = 0; i < inventory.size(); i++)
      print(inventory.at(i));
}
void print(string model, double price, int i){
  //overloading print, set the price with 2 decimal
  cout << setw(2) << i << ": MODEL: " << model
       << "\n" << "    "<<"PRICE: $" << fixed << showpoint <<
       setprecision(2) << price << endl;
}
void printModel(vector<Car> inventory){
  //print the model of the current index of the vector
  for(int i =0; i < inventory.size(); i++)
      print(inventory.at(i).model, i);
}
void printPrice(vector<Car> inventory){
  //it will print the price and model of the index of the
  for(int i =0; i < inventory.size(); i++)
      print(inventory.at(i).model, inventory.at(i).price, i);
}
void print(string model){
  //print model
  cout << model << endl;
}
void print(string model, int i){
  //print model as a list
  cout <<setw(2) <<  i << ": " << model << endl;
}
void print(Car c){
  //print the structure
  cout << "Model: " << c.model << endl;
  cout << "Manufacture: " << c.manufacture << endl;
  cout << "Doors: " << c.doors << endl;
  cout << "Year: " << c.year << endl;
  cout << "Manual: ";
  if(c.manual == true) cout << "true" <<endl;
  else cout << "false" << endl;
  cout << fixed << showpoint << setprecision(2) << "Price: $" << c.price << endl;
  cout << "----------" << endl;
}
void menu(){
  //print the menu
  cout << "0: See all inventory" << endl;
  cout << "1: See all models" << endl;
  cout << "2: See prices" << endl;
}
