/*
Author: Jesus Minjares BSEE
C++ App:
  The following code is a program that demostrate the use of class and well
  as derived classes. The program has a parent class call User which is
  has derived class such as Teacher and student. Each of the class have
  << and >> overload operator. The class are distributed into user.h,
  teacher.h, and student.h with it respective .ccp files.
*/
#include <iostream> //std::cout and std::cin
#include <string> //to use string
#include "user.h" //to be able to use the user Class
#include "student.h" // to be able to use the student class
#include "teacher.h" //to be able to use the teacher class
int main(){
  Student student; //create the default student object
  std::cin >> student; //load first name, last name, and id
  student.set_major("Electrical Engineering"); //set major to the student
  student.add_class("EE 5370"); //load class
  std::cout << student << std::endl; //output the object

  Teacher teacher; //create the default teacher object
  std::cin >> teacher; //get first name, last name, and id
  //load degree to the teacher object
  teacher.add_degree("Bachelor in Electrical Engineering");
  teacher.add_degree("Master in Electrical Engineering");
  teacher.add_degree("PhD in Electrical Engineering");

  //load the classes to the teacher object
  teacher.add_class("Operating System Design");
  teacher.add_class("Microprocessor 2");
  teacher.add_class("Intro to Cyber-security");
  //output the teacher object
  std::cout << teacher << std::endl;
  return 0;
}
