/*
Author: Jesus Minjares BSEE

C++ App:
      Get a user file name, and write to the file.
      Once writing to the file, the program will read from it
      and print it to the console.
*/
#include <iostream> //io
#include <fstream> //ofstream and ifstream
#include <string.h> //string literals
int main(){
  std::cout << "Enter file name: "; //prompt message
  std::string fileName; //create a string to hold the file name
  std::cin >> fileName; //store the file name into the string
  fileName += ".txt"; 
  std::ofstream myFile(fileName, std::ios::app); //open if exist, else create
  if(!myFile){return -1;} //test if the file was open properly
  else{ //else write to the file
    for(int i =1; i < 25; i++){
      myFile << i << "*" << i<< " " << i*i << std::endl; //write to the file
    }
    myFile.close(); //close the file
  }
  std::string buffer;//buffer string
  std::ifstream input(fileName); //open file as read only
  while(getline(input,buffer)){ std::cout << buffer << std::endl; } //get new line and print to console
  input.close(); //close input file object

}
