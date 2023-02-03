#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int a,b;
       cin>>a>>b;
       int arr[a];
       int k=b;
       for(int i=0; i<a; i++)
       {
           cin>>arr[i];
       }
       for(int j=0; j<a; j++){
           
           if(arr[j]<=k)
           {
                k-=arr[j];
               cout<<1;
           }
           else{
               cout<<0;
           }
       }
       cout<<endl;
   }
    
	return 0;
}
