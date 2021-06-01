#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

  fast;
  int t;   // declare t to take input of test cases 
  cin>>t;
  while(t--){   // running loop t times 
   
  ll n;    // declare n to take input of length of array 
  cin>>n;

  ll m=LLONG_MAX;  // declare m to store minimum
  int i;         // declare i to iterate 
  ll x;         // declare x to take input of array
  for(i=1;i<=n;i++)   // running loop n times
  cin>>x,m=min(m,x);    // take input array and calculate minimum 

   cout<<(n-1)*m<<"\n";   //printing answer (n-1)*m


  }
  return 0;
}