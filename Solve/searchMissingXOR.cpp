#include<iostream>
using namespace std;
int getMissingNo(int a[], int n)
{
    int x1 = a[0]; // Get the XOR of all the elements in the array 12356

    int x2 = 1; // Get the XOR of N+1 element in array 123456

    // when we do x1^x2 we should get the missing number "4"

    for (int i =1; i<n; i++) {
        cout<<"In 1st for loop array element before XOR= "<<a[i]<<endl;
        cout<<"In 1st for loop x1 before XOR= "<<x1<<endl;
        x1 = x1^a[i];
        cout<<"In 1st for loop x1 after XOR= "<<x1<<endl;
    }

    for(int i =2; i<= n+1; i++) {
        cout<<"In 2nd for loop i before XOR= "<<i<<endl;
        cout<<"In 2nd for loop x2 before XOR= "<<x2<<endl;
        x2 = x2^ i;
        cout<<"In 2nd for loop x2 after XOR= "<<x2<<endl;
    }
    return (x1^x2);

}

int main(){
    int arr[] = {1,2,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int miss = getMissingNo(arr, n);
    cout<<"Missing Number is"<< miss;
}