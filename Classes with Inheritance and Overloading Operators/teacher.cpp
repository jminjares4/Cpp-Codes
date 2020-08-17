//Auhor: Jesus Minjares BSEE
#include "teacher.h" //include header file
//must include the scope of the class
    Teacher::Teacher(){}
    Teacher::~Teacher(){}
    //setters
    //add the string to the vector of degree's
    void Teacher::add_degree(std::string degree){
      degrees.push_back(degree); //store string to the vector
    }
    //add the string to the vector of classes
    void Teacher::add_class(std::string classes){
      classes_teaching.push_back(classes); //store the stirng to the vector
    }
    //convert the vector to a string
    std::string Teacher::get_classes(){
      std::string buffer = "";//buffer to concate the vector
      for(int i =0; i < classes_teaching.size(); i++)
        buffer += classes_teaching[i] + "\n"; //concatneating with a buffer and vector
      return buffer; //return buffer
    }
    //conver the vector of degrees to a string
    std::string Teacher::get_degrees(){
      std::string buffer = ""; //buffer to store the strings
      for(int i = 0; i < degrees.size(); i++)
        buffer += degrees[i] + "\n";//concate the vector to the buffer
      return buffer; //return buffer;
    }
//overloading operators
//overload << operator to print the object
std::ostream& operator << (std::ostream& output, Teacher t){
  output << "First name: "  << t.get_first_name() << std::endl;
  output << "Last name: " << t.get_last_name() << std::endl;
  output << "ID: " << t.get_id() << std::endl;
  output << "Degrees:\n" << t.get_degrees() << std::endl;
  output << "Classes teaching:\n" << t.get_classes();
  return output;
}
//overload >> to get console input and store first name, last name, and id
std::istream& operator >> (std::istream& input, Teacher &t){
  std::string buffer;
  std::cout << "Firstname Lastname Id " << std::endl;
  input >> buffer; t.set_first_name(buffer);
  input >> buffer; t.set_last_name(buffer);
  input >> buffer; t.set_id(stoi(buffer));
  return input;
}
