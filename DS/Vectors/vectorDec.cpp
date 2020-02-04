#include<vector>
#include<iostream>
using namespace std;

class X
{
public:

// Delegate Constructors : To delegate a constructor means that one 
// constructor can call another to initialise the object.
  /*This is what the below two lines do*/
  X():val_(1){}
  X(int val):val_(val){}
  
  int get(){
    return val_;
  }
  void set(int val) {
    val_=val;}

private:
  int val_;
};

int main(){

  std::vector<X> ax;
  //  cout<<ax;
  
  ax.resize(10);

  for(int j=0; j<10; ++j)
    {
      cout<<ax[j].get();
      cout<<endl;
    }
  
  //  for(int i=0; i<10; ++i){
  //  ax[i].set(i); // this will call the setter function to fill the vector
  // }


  ax.reserve(10);
    for(int i=0; i<10; ++i)
      {
	ax.push_back(X(i)); // why is this not getting called
	//	cout<<ax[i].get();
      }

    for (int k =0; k<10; ++k)
      {
	cout<<ax[k].get();
	cout<<endl;
      }
}
