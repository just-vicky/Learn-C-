#include <iostream>


namespace square{
  std::string name = "vicky";

}
int main(){

  std::string phrase = "how are you";

  std::cout << phrase.length() << std::endl;
  std::cout << phrase[2] << std::endl;
  std::cout << phrase.find("are", 0) << std::endl;
  std::cout << phrase.substr(3,2) << std::endl; //substr(index position , how many should be taken after the index position)

  std::string name = "I am fine" ;
  std::string nameId = name.substr(2, 5);

  std::cout << nameId << square::name << std::endl; 

  return 0;
}


// a = [1, 2, 3, 4]
// Enum.count(a)

