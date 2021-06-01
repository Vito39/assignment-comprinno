#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;
    int t;           // declare variable t to take input of test cases 
    cin>>t;
    while(t--)       // running loop from t to 1
    {
    int n;          // declare variable n to take input of length of array
    cin>>n;

    int c=0;        // declare variable c to store count of numbers absolute(value)>=2 
    int m=0;        // declare variable m to store value of if absolute(value)>=2
    int minusone=0;  // declare variable minusone to store count of -1
    int plusone=0;    // declare variable plusone to store count of 1
    int i;          // declare variable i to iterate
    int x;          // declare variable x to take input x
    
    for(i=1;i<=n;i++){  // run a loop n times
        cin>>x;         // take input of array
        if(abs(x)>=2)c++,m=x;    // count of absoulte value >=2
        if(x==-1)minusone+=1;   // to store count of -1
        if(x==1)plusone+=1;     // to store count of 1
    }

    if(c>1)cout<<"no";     // if c>=2 no solution
    else{

      if(minusone && plusone ){     
      if(c==0) cout<<"yes";     // if c==0 then print yes
      else cout<<"no";          // else no
      }
      else if(plusone){        // if only plusone then print yes
          cout<<"yes";
      }
      else if(minusone){      // if only minusone then print yes for c==0 and minusone==1 otherwise no
         if(c==0 && minusone==1)cout<<"yes";
         else cout<<"no"; 
      }
      else{          // if both of them are zero then print yes
      cout<<"yes";    
      }
    }
    cout<<"\n";

    }
   return 0;
}