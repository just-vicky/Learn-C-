#include <iostream>

int main(){

  int num1;
  char sym;
  int num2;
  int ans;

  std::cout<<"Enter Num1: ";
  std::cin>>num1;
  std::cout<<"Enter Operator: ";
  std::cin>>sym;
  std::cout<<"Enter Num2: ";
  std::cin>>num2;


  if (sym == '+')
  {
    ans = num1 + num2;
  }else if (sym == '-')
  {
   ans = num1 - num2;
  }else if (sym == '*')
  {
   ans = num1 * num2;
  }else if (sym == '/')
  {
   ans = num1 / num2;
  }else{
    std::cout<<"Invalid Operator";
  }

  std::cout<< "The answer is "<<ans<< std::endl;
  
  



  return 0;
}