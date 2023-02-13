#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,w,sum=0,res=0;
	    cin>>n>>w;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=n-1;i>=0;i--){
	        if(sum<w){
	            sum+=arr[i];
	        }
	        else{
	            res++;
	        }
	    }
	    cout<<res<<endl;
    }
   
    
	return 0;
}
