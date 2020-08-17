//Author: Jesus Minjares BSEE
#include "student.h" //include the header file
    //must include the scope of the class
    Student::Student(){}
    Student::~Student(){}
    //setters
    //store the major of the student
    void Student::set_major(std::string major){
      this->major = major;
    }
    //add class to the vector
    void Student::add_class(std::string class_taking){
      classes_taken.push_back(class_taking); //insert the class to the vector
    }
    //getters
    //return the major
    std::string Student::get_major(){
      return this->major;
    }
    //convert the vector to a string by concatneating
    std::string Student::get_classes(){
      std::string classes = "";//create empty string
      for(int i =0; i < classes_taken.size(); i++){
        classes += classes_taken[i] + " "; //concate string
      }
      return classes; //return the string of classes
    }
    //overloading operators
    //overload << operator to print the object
    std::ostream& operator << (std::ostream& output, Student s){
      output << "First name: "  << s.get_first_name() << std::endl;
      output << "Last name: " << s.get_last_name() << std::endl;
      output << "ID: " << s.get_id() << std::endl;
      output << "Major: " << s.get_major() << std::endl;
      output << "Classes: " << s.get_classes();
      return output; //allow to insert << after the object
    }
    //overload >> to get console input and store first name, last name, and id
    std::istream& operator >> (std::istream& input, Student &s){
      std::string buffer;//local variable to store inouts
      std::cout << "Firstname Lastname Id " << std::endl;
      //get input and storet the loaded buffer to the setters
      input >> buffer; s.set_first_name(buffer);
      input >> buffer; s.set_last_name(buffer);
      input >> buffer; s.set_id(stoi(buffer));
      return input;
    }
