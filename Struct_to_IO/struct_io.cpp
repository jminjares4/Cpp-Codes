#include "inventory_func.h"
int main(){
  Car car; //create a car object
  vector<Car> inventory; //create a vector that hold Car
  string buffer,userInput; //string buffers
  int user;// user input
  char ch; //user input for y or n

  //create an ofstream object to write to the file
  ofstream output("owner.txt", ios::app);
  //test if the file was open sucessfully
  if(!output){cout << "Error!"; return -1;}
  //create an ifstream object to read from the inventory.txt
  ifstream file("inventory.txt");
  //test if the file was open properly
  if(!file){cout << "Error!"; return -1;}
  cout << "Loading inventory...\n";
  //iterate over the file until EndOfFile
  while(!file.eof()){
    //read from the file and load the structure
    file >> car.model;
    file >> car.manufacture;
    file >> car.doors;
    file >> car.year;
    file >> car.manual;
    file >> car.price;
    //buffer is a dummy variable
    //as i used --- to separate the cars
    file >> buffer;
    //add the structure to the vector
    inventory.push_back(car);
  }
  file.close(); //close the instance
  cout << "inventory has been loaded...\n";

  //boolean variable to determine if terminate the loop
  bool end = false;
  while(!end){
    menu(); //print menu
    cout << "Enter choice: ";
    cin >> user; //get user option
    switch(user){
      case 0: //if 0, print all info
          print(inventory);
          break;
      case 1://print only the model
          printModel(inventory);
          break;
      case 2://print price and model
          printPrice(inventory);
          break;
      default://print price and model
          printPrice(inventory);
    }
    //ask the user if they want to buy a car
    cout << "Do you want to buy a car? (y or n)\n";
    cin >> ch; //store answer
    if(ch == 'n') {cout << "Thank you\n"; break;} //break loop
    else{
      cout << "\n" << "----------INVENTORY----------\n";
      try{ //use a try and catch block to avoid outbound
      printModel(inventory); //print the models
      cout << "Enter the vehicle number: ";
      cin >> user; //get user input
      //if the user enter an outbound then throw an exception
      if(user < 0 || user > inventory.size()) throw "out of bound";
      cout << "You have chosen: " << inventory.at(user).model << endl; //print model chosen
      cout << "Enter your first name: "; //get user name
      cin >> userInput; //store name
      output << userInput << " "; //output to the file
      cout << "Enter your last name: "; //get user lastname
      cin >> userInput; //store lastname
      output << userInput << endl; //output to the file
      //state what the user owns
      output << "OWNS: " << inventory.at(user).model << endl;
      //remove vehicle from the inventory
      inventory = removingIndex(inventory, user);
      }
      catch(const char* msg){
        //print message
        cout << msg << endl;
      }
    }
    //prompt if they want to continue
    cout << "Do you want to continue? (y or n)\n";
    cin >> ch; //store input
    if(ch == 'n') end = true; //set flag as true
    }
    output.close(); //close owner file
    //update the inventory list, if == 0, successfully updated
    if(loadInventory(inventory,"inventory.txt") == 0){
      cout << "Updated inventory..." << endl;
    }
    else{ //returns a -1, then an error occured
      cout << "Error!"; //output
      return -1; //terminate
    }
}
