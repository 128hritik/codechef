#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int n,x;
       cin>>n>>x;
       int arr[n];
       for(int i=0; i<n; i++)
       {
           cin>>arr[i];
       }
       sort(arr,arr+n);
       int pm=arr[n-x];
       cout<<pm-1<<endl;
       
   }
    
	return 0;
}
