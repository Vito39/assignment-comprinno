#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int a[105]; // declare array for global use.

int main(){


    fast;    // for fast output

    int t;    // taking the value
    cin>>t;

    while(t--){  // running the loop t to 1.

    int n;     // taking varibale length 
    cin>>n;    // taking varible

    int i;
    for(i=1;i<=n;i++)
    cin>>a[i];     // taking stripe as input
    
    if(n%2==0){    // if n is divisble by 0 then no is anwser
      	cout<<"no"<<"\n";
    }
    else {     // checking for answer exist  

         bool b=1;  // for remember the answer
    	int x=n+1;    
    	x=x/2;     // knowing the mid position
    	int y;      
    	for(i=x,y=x;i>=1;i--,y--)    // from center to left to check every enter value is correct or not.
    		if(a[i]!=y)b=0;
        
        
        if(b==1){ for(i=x,y=x;i<=n;i++,y--)if(a[i]!=y)b=0; } // from center to right check every enter value is correct or not.
      
      if(b)cout<<"yes"<<"\n";  // printing answer
      else cout<<"no"<<"\n";

    
    }	
   }


	return 0; 
}

