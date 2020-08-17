//Author: Jesus Minjares BSEE
#ifndef USER_H
#define USER_H
#include <iostream>//std::cout, std::cin
#include <string> // std::string
class User{
  private: //private members
    int id; //the id of the user
    std::string first_name; //first name
    std::string last_name; //last name
  public: //public members
    User(); //default constructor
    //custom constructor
    User(std::string first_name, std::string last_name, int id);
    ~User();//deconstructor
    //setters
    //set the first name
    void set_first_name(std::string first_name);
    //set the last name
    void set_last_name(std::string last_name);
    //set the id
    void set_id(int id);
    //getters
    //return the first name
    std::string get_first_name();
    //return the last name
    std::string get_last_name();
    //return the id
    int get_id();
};
//operator overloading
//overload the << and the >>
std::ostream& operator << (std::ostream& output,  User user);
std::istream& operator >> (std::istream& input, User &user);
#endif
