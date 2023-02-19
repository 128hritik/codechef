#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int n,a;
       cin>>n>>a;
       int arr[n];
       for(int i=0;i<n; i++)
       {
           cin>>arr[i];
       }
       sort(arr,arr+n);
	    if(a>=n-1)
	    {
	        cout<<arr[n-1]<<endl;
	    }
	    else
	    {
	        cout<<arr[a]<<endl;
	        
	    }
	    
	    
	}
   
    
	return 0;
}
