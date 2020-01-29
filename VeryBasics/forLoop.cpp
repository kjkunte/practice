#include<iostream>
using namespace std;

double mean(double *array, size_t n)
{
  double m=0;
  for(size_t i=0; i<n; i++){
    m += array[i];
    std::cout<<"i"<<i<<endl;
    std::cout<<"i"<<array[i]<<endl;
    std::cout<<"m"<<m<<endl;
  }
  std::cout<<m<<endl;
  std::cout<<n<<endl;
  return m/n;
}

int main()
 {
  double a[] = {1,2,3,4,5};
  std::cout<<mean(a,5)<<std::endl;
  return 0;
 }
