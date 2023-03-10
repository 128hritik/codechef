#include <iostream>
#include<string>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,y;
	cin>>t;
	while(t--)
	{
	    cin>>n>>y;
	    int a[n];
	    string required, current;
	    int orans=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        orans|=a[i];
	    }
	    current=bitset<32>(orans).to_string();
	    required=bitset<32>(y).to_string();
	    int flag=0, answer=0;
	    for(int i=31; i>=0; i--)
	    {
	        if(current[i]=='1' && required[i]=='0')
	        {
	            flag=1;
	            break;
	        }
	        if(current[i]=='0' && required[i]=='1')
	        {
	            answer+=pow(2,31-i);
	        }
	    }
	    if(flag){cout<<-1<<endl;}
	    else {cout<<answer<<endl;}
	}
	return 0;
}