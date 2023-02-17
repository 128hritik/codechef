#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long int n,k;
	    cin>>n>>k;
	    long int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    long int cnt=0,sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        if(sum-arr[i]/2<=k){
	            cnt++;
	        }
	        else{
	            break;
	        }
	    }
	    cout<<cnt<<endl;
    }
   
    
	return 0;
}
