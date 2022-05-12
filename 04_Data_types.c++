#include <iostream>

using namespace std;

int main(){

  string name = "vikram" ; //string of characters 
  char grade = 'F'; 
  int age = 34;
  float decimal2 = 3.544; //is not specific
  double decimal = 2.33 ; //more specific than float
  bool isMale = false;

  if (isMale == true)
  {
    cout << "My name is "<< name <<" and my age is "<< age << endl;
  }else{
    cout << "Terminate sesion" << endl;
  }
  

  return 0;
}


// name ="vicky"
// print "My name is !name!" // Interpolation = variable 
// print "My name is" + name //concatination