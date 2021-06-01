#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){

   fast;
   int t;    // declare t to take input of test case 
   cin>>t;
   while(t--){   // run a loop from t to 1

   long long c,d,l; // declare c,d,l to take input of number cats, dogs, legs
   cin>>c>>d>>l;  // take input

   if(l%4!=0)cout<<"no";    // if l remainder 4 is not equal to 0 print no solution
   else{                    //else

    if(d*4<=l){        // if number of legs of dogs is less than     
    long long extra=l-d*4;   // calculating extra legs

    extra=extra/4;      // converting leg to animal count
    if(extra<=c){      //  if extra  <= number  of cat then checking condition  number of cats*2<=dogs print yes else no    
     c-=extra;
     c=(c+1)/2;
     if(c<=d)cout<<"yes";
     else cout<<"no";

    }
    else{               //else no
    	cout<<"no";
    }   
    }
    else {             // else no 
     cout<<"no";
    }

   }
    cout<<"\n";
   
      }
      return 0;
}