//Author: Jesus Minjares BSEE
#ifndef TEACHER_H
#define TEACHER_H
#include <iostream> //std::cout, std::cin
#include <string> //std::string
#include <vector> //std::vector
#include "user.h" //include header file
class Teacher : public User{ //inherit the user class
  private: //set the private members
    std::vector<std::string> degrees; //vector to hold degrees
    std::vector<std::string> classes_teaching; //vector to hold class that would be taught
  public: //public members
    Teacher(); //constructor
    ~Teacher(); //deconstructor
    //add a degree to the the vector
    void add_degree(std::string degree);
    //add a class to the vector
    void add_class(std::string classes);
    //convert the vectors to strings
    std::string get_classes();
    std::string get_degrees();
};
//overload operator <<
std::ostream& operator << (std::ostream& output, Teacher t);
//overload operator >>
std::istream& operator >> (std::istream& input, Teacher &t);
#endif
