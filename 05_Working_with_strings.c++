#include <iostream>

using namespace std;

int main(){

  string phrase = "how are you";

  cout << phrase.length() << endl;
  cout << phrase[2] << endl;
  cout << phrase.find("are", 0) << endl;
  cout << phrase.substr(3,2) << endl; //substr(index position , how many should be taken after the index position)

  string name = "I am fine" ;
  string nameId = name.substr(2, 5);

  cout << nameId << endl;  

  return 0;
}