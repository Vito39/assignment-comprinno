#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

	fast;
	int t;     // declare variable t
	cin>>t;    // taking input t

    while(t--){   // running a loop t times

    int n;      // declare n to store length
    cin>>n;     // taking length input

    string prev;  // declare first string 
    cin>>prev;    // take input first string

    string next;  //declare next to store next string 
    bool b=1;   // for storing answer

    for(int i=2;i<=n;i++){    // running loop n-1 times
     cin>>next;               // taking next as input
     if(next=="cookie" && prev=="cookie")     // checking condition
     b=0;       
     prev=next;     // storing next in prev for next iteration
    }

    if(n==1)next=prev;    // base case condition

    if(next=="cookie" )b=0;   // checking base condition last string should be equal to milk
    
    if(b)cout<<"YES"<<"\n";  //printing answer.
    else cout<<"NO"<<"\n";

    }


	return 0;
}