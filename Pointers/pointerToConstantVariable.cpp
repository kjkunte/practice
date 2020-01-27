#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
     const int q = 5;
     // int const j = 6;
     //     int q = 5;
     int j = 6;
  cout<<"Printing the address" <<&q;
  cout<<endl;
  cout<<"Printing the value"<< q;
  cout<<endl;
  const int* p = &q;
  //int* p = &q;

  //down qualification of j -- Type checking in c++
  //p=&j

  //This will give a compilation error for invalid conversion
  // int* p = &q;

  //Compilation error since the variable q is declared as 
  *p = 7; //changing the value of the pointer


    
  cout<<"Printing the address of the pointer"<<p<<endl;
  cout<<"Printing the value of q"<<q<<endl;

  // up qualification of int j
  p = &j;
  cout<<"Print the new addres of the pointer"<<p<<endl;
}
