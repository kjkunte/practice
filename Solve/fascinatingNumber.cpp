#include<iostream>
#include<string>
using namespace std;

int main() {
    
    int x1;
    cin>>x1;
    findFascinatingNumber(x1);
    return 0;
}

// for concatenating two numbers, they have to be converted to string
int findFascinatingNumber(int x1){
    int x2 = x1*2;
    string s1 = to_string(x2);
    int x3 = x1*3;
    string s2 = to_string(x3);
    string s3 = s1 + s2;
    int * arr = new int [s3.length()-1]; // Declaring new dynamic array with size 1 less than that of the string
    for(int i = 0; i<s3.length(); i++){
            arr[i]=s3[i];
    }  
    //sorting the array
    for(int i = 0; i<s3.length(); i++){
        if(arr[i]>arr[i+1]){
            arr[i]=arr[i+1];
        }
    }
    
    // int c = stoi(s3);

}

