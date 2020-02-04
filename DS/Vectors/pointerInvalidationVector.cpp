#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int> v(5);
  for (int i=0; i<5; i++)
  {         
    cout<<v[i]<<endl;
  }
  int *pi = &v[3];
  v.push_back(999); // here pushback will reallocate the size of the vector and then the address to which the pointer is pointing to will become invalid
  for (int i=0; i<5; i++)
  {  
    cout<<"After PushBack"<<v[i]<<endl;
  }
  *pi = 333;
   for (int i=0; i<5; i++)
  {  
    cout<<"After pointer use"<<v[i]<<endl;
  }
}
