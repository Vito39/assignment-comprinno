#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int c[26];       // array for storing count of character in string 
vector<int>f;    // vector for storing count in increasing order
int main()
{
  fast;

   int t;        //test case variable 
   cin>>t;       // input test case
   while(t--){    // loop t to 1

   string a;     // enter the string
   cin>>a;

   int i;

   for(i=0;i<26;i++)c[i]=0;

   for(i=0;i<a.length();i++)    // making count array
   c[a[i]-'a']++;    

   sort(c,c+26);     // sorting for increasing order

   f.clear();    //clearing the previous value

   for(i=0;i<26;i++){
    if(c[i]!=0)f.push_back(c[i]);	 // pushing 
   }
    
   if(f.size()<3)cout<<"Dynamic"<<"\n";
   else
   {

    bool b=1;
    for(i=2;i<f.size();i++){
       if(f[i]!=f[i-1]+f[i-2])b=0;    // checking condition
    }	
    
    // printing 
    if(b) cout<<"Dynamic"<<"\n";
    else cout<<"Not"<<"\n";

   } 

   

   }



	return 0;
}
   
