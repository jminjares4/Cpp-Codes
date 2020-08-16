/*
Author: Jesus Minjares BSEE
C++ App:
    Guessing game that will take a user string and test
    if the string is identical from the one from the file.
    If the file of the input word is empty, then the word would
    be "empty", else it will store the string in the file until eof.
    The user guesses will be store into a stack as a dynamic array
    or a vector<string>. The guess will be posted to the output file.
    Once the game ends or the user terminates it, the program
    will print the stack or user guesses to the console.
*/
#include <iostream> //input and output
#include <vector> //to create the stack
#include <string.h> //string for user input
#include <fstream> //input and output to files
using namespace std; //to avoid using std::

void printStack(const vector<string>); //print the vector with an for eahch loop
int main(){
  vector<string> stack; //create a vector of strings
  string word, userGuess; //string
  char ch; //character
  ofstream output("stack.txt"); //open or create the stack.txt
  if(!output) return -1; //test if it was open properly

  ifstream input("word.txt"); //open or create the word.txt
  if(!input) return -1; //test if the file was open properly

  bool empty = (getline(input,word), input.eof() ); //determine if the file is empty
  if(empty) word = "empty"; //if empty store "empty" into the word
  else input >> word; //else get the string from the file

  cout << "The magic word is " << word << endl << endl; // ouput the magic word

  while(1){
    cout << "Guess the word: "; //output message
    cin >> userGuess; //store userInput
    if(!word.compare(userGuess)){ //compare the string with the .compare from std::string
      cout << "Nice! The word was: " << userGuess << endl;
      cout << "Do you want to play again? (y or n)\n"; //ask the user if they want to play again
      cin >> ch; //store character
      if(ch == 'n'){ //if n
        cout << "Have a great day!" << endl; //output message
        break; //break loop
      }else{
        if(input >> word){ //get the magic word
            cout << "loading new word..." << endl; //output
            cout <<"MAGIC WORD: " <<  word << endl; //state the magic word
        }
        else{
          //if the file has no more words
          cout << "no more words! Thank you for playing..." << endl;
          break; //exit loop
        }
      }
    }
    else{
      //as long that the user do not enter the
      //correct answer, store the input into the stack
      stack.push_back(userGuess);
      output << userGuess << endl; //output to the file as well
    }
  }
    printStack(stack); //print the stack

    input.close(); //close input file
    output.close(); //close ouput file
    stack.clear(); //clear the stack
    cout << endl << endl;
}
//pass a vector
void printStack(const vector<string> w){
  cout << endl;
  int count=0; //create a counter
  //use a post increment  and a for each loop to iterate over the vector
  for(auto i : w) cout << count++ << ": " << i << endl;

}
