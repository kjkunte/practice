#include<iostream>
#include<string>
using namespace std;

// for concatenating two numbers, they have to be converted to string
int findFascinatingNumber(int x1){
    int x2 = x1*2;
    int x3 = x1*3;
    string s2 = to_string(x2);
    string s3 = to_string(x3);
    string s4 = s2 + s3;
    // string s4 = "Kshitij";
    // cout<<s4.length()<<endl;

    int * arr = new int [s4.length()-1]; // Declaring new dynamic array with size 1 less than that of the string
    for(int p=0; p<s4.length(); p++){
        // when we are converting the string of integers to an integer array the ascii value of the integers gets stored
          arr[p]=static_cast<char>(s4[p]);
            // cout<<arr[p]<<endl;
    }

    // sorting the array
    for(int i = 0; i<s4.length(); i++){
        for(int j = i+1; j<s4.length(); j++ ){
            if(arr[i]>arr[j]){
                int temp = arr[i+1];
                arr[j]=arr[i];
                arr[i] = temp;
            }
        }
        cout<<arr[i]<<endl;
    }

    // for(int i = 0; i<s4.length(); i++){
    //     if(arr[i]==arr[i+1]){
    //       return 0;
    //     }
    //     else {return 1;}
    // }
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



