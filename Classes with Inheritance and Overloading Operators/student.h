//Author: Jesus Minjares BSEE
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream> //std::cout, std::cin
#include <string> //std::stirng
#include <vector> //std::vector<type>
#include "user.h" //include parent class
class Student : public User{ //inherit the user class
  private: //set the private memebers
    std::string major; //student major
    std::vector<std::string> classes_taken; //vector to hold string of the class to be taken
  public:
    Student(); //constructor
    ~Student(); //deconstructor
    //set the major
    void set_major(std::string major);
    //add the class to the vector
    void add_class(std::string class_taking);
    //get the student major
    std::string get_major();
    //get the student class as a string
    std::string get_classes();
};
//overload operator <<
std::ostream& operator << (std::ostream& output, Student s);
//overload operator >>
std::istream& operator >> (std::istream& input, Student &s);
#endif
