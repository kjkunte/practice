#include<iostream>
using namespace std;

int main(){

  int i = 10;
  int j = 20;

  //her the const is put before the pointer hence this is contant pointer
  //the addre of this pointer cannot be changed
  int *const ptr = &i;

  *ptr = 100;
  ptr = &j;
   return 0;
}
