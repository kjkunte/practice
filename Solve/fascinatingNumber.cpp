#include<iostream>
#include<string>
using namespace std;
// for concatenating two numbers, they have to be converted to string
int findFascinatingNumber(int x1){
    int x2 = x1*2;
    int x3 = x1*3;
    cout<<x2;
    // string s1 = to_string(x2);
    // cout<<"s1 is"<<s1<<endl;
    string s1,s2;
    s1.push_back((char)(x2 + '0'));
    s2.push_back((char)(x3 + '0'));
    
    // string s2 = to_string(x3);
    cout<<"s2 is"<<s2<<endl;
    string s3 = s1 + s2;
    cout<<"s3 = "<<s3;
    int * arr = new int [s3.length()-1]; // Declaring new dynamic array with size 1 less than that of the string
    for(int i = 0; i<s3.length(); i++){
            arr[i]=s3[i];
    }  
    // cout<<*arr<<endl;
    //sorting the array
    for(int i = 0; i<s3.length(); i++){
        if(arr[i]>arr[i+1]){
            arr[i]=arr[i+1];
            // cout<<arr[i];
        }
    }

    for(int i = 0; i<s3.length(); i++){
        if(arr[i]==arr[i+1]){
          return 0;
        }
        else {return 1;}
    }
    delete arr;
    // int c = stoi(s3);
}

int main() {
    
    int x1,t=0;
    cin>>t;
    
    while(t--!=0){
    cin>>x1;
    cout<<findFascinatingNumber(x1)<<endl;
    }  
    return 0;
}



