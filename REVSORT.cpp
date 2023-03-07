#include <iostream>
using namespace std;

int main() {
    int t,i,j;
    cin>>t;
    int n,k,flag;
    while(t--){
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        
        int flag=0;
        for(i=0;i<n-1;i++){
           
                if(a[i]>a[i+1]){
                    if(a[i]+a[i+1]>k)flag=1;
                   else swap(a[i],a[i+1]);
                }
                
            }
            
        
        if(flag)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
	// your code goes here
	return 0;
}

