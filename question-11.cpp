#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

  fast;
  int t;   // declare variable t 
  cin>>t;   // take input of test cases
  while(t--){  // running loop t times

   char a;    // declare variable a
   cin>>a;    // taking input a

   a=tolower(a);  // converting to lowercase
                  // printing correspondence word
   if(a=='b'){
   cout<<"BattleShip";
   }
   else if(a=='c'){
    cout<<"Cruiser";
   }
   else if(a=='d'){
    cout<<"Destroyer";
   }
   else if(a=='f'){
    cout<<"Frigate";
   }
     cout<<"\n";
   }
   return 0;
}