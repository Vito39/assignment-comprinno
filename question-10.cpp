#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

  fast;
  int t;   //declare t to take input of test cases 
  cin>>t;    
  while(t--){  // running loop t times

  long double b;  //  declare varible b to take input of salary
  cin>>b;

  long double T=0;
  if(b>=1500){    // if b>=1500 T=b+0.98*b+500 else T=2*b
   T=b+500+0.98*b;
  }  
  else{
   T=2*b;
  }
    cout<<fixed<<setprecision(2)<<T<<"\n"; // printing answer
  }
   return 0;
}