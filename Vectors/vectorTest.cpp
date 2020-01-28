#include<iostream>
#include<vector>

using namespace std;

int main(){
  vector<int> g1;

  for (int i = 1; i<=5; i++)
    g1.push_back(i);

  cout<<"Output of begin and en: ";
  for (vector<int>::iterator itr=g1.begin(); itr!=g1.end(); ++itr)
    cout << *itr << " ";

  return 0;
}
