#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
	cin>>a;
	while(a--)
	{
	    int b,c;
	    cin>>b>>c;
	    int d[b];
	    int pos;
	    for(int i=0;i<b;i++)
	    {
	        cin>>d[i];
	    }
	    sort(d,d+b);
	    int sum=0;
	    for(int i=0;i<b;i++)
	    {
	        if(d[i]>=0)
	        {
	            sum=sum+d[i];
	        }
	        else
	        {
	            if(c>0)
	            {
	                d[i]=d[i]*-1;
	                sum=sum+d[i];
	                c--;
	            }
	        }
	    }
	    cout<<sum<<endl;
	}
   
    
	return 0;
}
