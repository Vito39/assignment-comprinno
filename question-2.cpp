#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
vector<vector<int> >v(3,vector<int>(3,0));

bool checkorderexist(){

     int i,j;
    int b=0; 
    
    for(i=0;i<2;i++){

    b=0;	
    for(j=0;j<3;j++)
    	if(v[i][j]<v[i+1][j]){b=1;}
    	  else if(v[i][j]>v[i+1][j]){b=-1;break;}   // checking the condition 
    
    if(b<=0)
    break;

    }

    if(b>0)return 1;    // if answer exist return 1;

    

    swap(v[0],v[2]);      // to check for second probability 
    
    for(i=0;i<2;i++){

    b=0;
    for(j=0;j<3;j++)
    	if(v[i][j]<v[i+1][j]){b=1;}
    	  else if(v[i][j]>v[i+1][j]){b=-1; break; }   // checking the condition

     if(b<=0)
    break;	  

    }

    swap(v[0],v[2]);     // tranfroms to original

    if(b>0)return 1;   // if answer exist return 1;

    return 0;    // return 0 if function reach at last.

}

string exist(){     // making one by one those array to middle array

   bool b=0;

   b|=checkorderexist();   // check condition

   swap(v[0],v[1]);    // to make middle array

   b|=checkorderexist();   // check condition 

   swap(v[1],v[2]);   // to make middle array

   b|=checkorderexist();   // check condition

   if(b)return "yes";  // returning
   else return "no";

}

int main(){
    
    int t;       // take t as input 
    cin>>t;
    while(t--)
    {

     int i,j;

     for(i=0;i<3;i++)
     	for(j=0;j<3;j++)cin>>v[i][j];   // take 3 variable in correspondence array


      cout<<exist()<<"\n";
    }

	return 0;
}

