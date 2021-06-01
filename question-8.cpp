#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

  fast;
  int t;    // declare varible t to take input 
  cin>>t;
  while(t--){ // running loop t times

  ll a,b,n;   // declare a,b,n
  cin>>a>>b>>n;  // taking input

  if(n%2)a*=2;   // if n is odd then a will be twice beacuse integer division of n/2 will be multiply in both 

  ll x=max(a,b);  // max(a,b)
  ll y=min(a,b);  // min(a,b)
  cout<<x/y<<"\n";  //printing answer
  }
   return 0;
}