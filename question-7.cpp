#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

map<int,int>v;   // declare map to store the count of sticks
int main()
{
	int t;     // declare t to take input test cases
	cin>>t;
	while(t--){  // running  loop from t to 1

    v.clear();    // clearing map

    int n;     // declare n to take input of length of array
    cin>>n;

    int i;    // declare i to iterate
    int x;     // declare x to take input of array    
    int a=-1;  // declare a to store area
    priority_queue<int>q;  // to store stick have count 2

    for(i=1;i<=n;i++){    // running loop n times 
    cin>>x;               // take input  
    v[x]++;
    if(v[x]>=2)v[x]-=2,q.push(x);   // if count of x > 2  push it in priority queue and reduce count by 2. 
   } 	

    if(q.size()>1){  // if size >= 2 then calculate the area otherwise -1 
     int x=q.top();
     q.pop();
     x*=q.top();
     cout<<x;
    }
    else 
    cout<<-1;	

   cout<<"\n";
	}

	
	return 0;
 }
