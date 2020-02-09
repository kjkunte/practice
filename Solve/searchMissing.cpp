// #include <iostream>
// #include<stack>
// using namespace std;

// int main() {
// 	//code

// 	int a;
// 	int size;
// 	cin>>a;
// 	cin>>size;
// 	int * arr = new int[size];

//     for (int j = 0; j<size; j++){
// 	        cin>>arr[j];
//             // cout<<arr[j];// break;
// 	    }
//     stack<int> mystack;
// 	for(int i=0; i<=a; i++){
//         cout<<"HI";
// 	    int k =0;
//             while(arr[k+1]-arr[k]==1){
//                 cout<<"hi";
//                     k++;
//                     int m = arr[k]+1;
//                     cout<<m;
//                     mystack.push(m);
//             }
// 	}
	
// 	      while (!mystack.empty()) { 
//         cout << ' ' << mystack.top(); 
//         mystack.pop(); 
//     }
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	
	cin>>t;
	while(t--)
	{
		int n,res=0;
		cin >> n;
		// int * arr = new int[n];
		
		for(int i=1;i<n;i++){
			cin>>arr;
            cout<<"x= "<<x<<endl;
            cout<<"before XOR res= "<<res<<endl;
			res = res^x;
            cout<<"printing the output of res^x= "<<res<<endl;
            cout<<"i = "<<i<<endl;
			res = res^i;
            cout<<"printing the output of res^i= "<<res<<endl;
		}
		cout<<(res^n)<<endl;
	}
	return 0;
}