#include <iostream>
#include <cmath> //used for doing math functions

int main(){

  std::cout<<  40 % 4; // % = modulus operator which provides the remainder
  std::cout<< pow (2,3) << std::endl;//pow = power
  std::cout<< sqrt (128) << std::endl;//sqrt = square root
  std::cout<< round(2.6455 ) << std::endl;//round = rounding off
  std::cout<< ceil(2.1)<< std::endl;//ceil = rounds up to the next number
  std::cout<< floor(2.8)<<std::endl;//floor = rounds down to the last number
  std::cout<< fmax(2, 3333)<<std::endl;//fmax = finds which one is the largest
  std::cout<< fmin(33, 545)<<std::endl;//fmin = finds which one is the smallest 

  return 0;
}