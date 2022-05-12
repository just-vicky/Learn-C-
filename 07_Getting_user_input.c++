#include <iostream>

int main(){

  // double decimal;
  

  // std::cout<< "Enter your decimal:";
  // std::cin >> decimal;
  // std::cout<<"you are "<<decimal<<" years old"<<std::endl;

  // char grade;

  // std::cout<< "Enter your grade:";
  // std::cin >> grade;
  // std::cout<<"you are "<<grade<<" years old"<<std::endl;

  // std::string name;

  // std::cout<< "Enter your name:";
  // std::cin >> name;
  // std::cout<<"you are "<<name<<" years old"<<std::endl;

  // int age;

  // std::cout<< "Enter your age:";
  // std::cin >> age;
  // std::cout<<"you are "<<age<<" years old"<<std::endl;

  std::string name1;

  std::cout<<"Enter your full name: ";
  getline(std::cin,name1);
  std::cout<<"Hola Monsieur "<<name1;


  return 0;
}