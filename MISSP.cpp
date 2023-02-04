#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
       sort(arr,arr+n);
	    for(int i=0; i<n; i=i+2)
	    {
	        if(arr[i]!=arr[i+1])
	        {
	            cout<<arr[i]<<"\n";
	            break;
	        }
	    }
	}
    
	return 0;
}
