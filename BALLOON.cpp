#include <iostream>
using namespace std;

int main() {
    int t;
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
    int count=0;
    for(int j=0; j<n; j++)
    {
        if(arr[j]<8)
        count=j+1;
    }
    cout<<count<<endl;
    }
   
    
	return 0;
}
