//Author: Jesus Minjares BSEE
#include <iostream> //std:cout and std::cin
#include <string> //std::stirng
#include "user.h" //include the header file
    //Class method must have the scope of class
    //custom constructor
    User::User(std::string first_name, std::string last_name, int id){
      this->first_name = first_name;
      this->last_name = last_name;
      this->id = id;
    }
    //default constructor and deconstructor
    User::User(){}
    User::~User(){}
    //setters
    //set the first name, last_name, and id with the this->
    void User::set_first_name(std::string first_name){  this->first_name = first_name; }
    void User::set_last_name(std::string last_name){ this->last_name = last_name; }
    void User::set_id(int id){ this->id = id; }
    //getters
    //methods to return the private members
    std::string User::get_first_name(){return this->first_name;}
    std::string User::get_last_name(){return this->last_name;}
    int User::get_id(){return this->id;}

    //overload operator to allow to print the object to the console with <<
    std::ostream& operator << (std::ostream& output,  User user){
      output << "First name: " << user.get_first_name();
      output << "\nLast name: " << user.get_last_name();
      output << "\nID: " << user.get_id();
      return output;
    }
   //overload operator to allow to get input to the object using >> 
   std::istream& operator >> (std::istream& input, User &user){
      std::string in;
      input >> in;
      user.set_first_name(in);
      input >> in;
      user.set_last_name(in);
      input >> in;
      user.set_id(stoi(in));
      return input;
    }
