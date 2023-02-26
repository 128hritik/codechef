#include <iostream>
using namespace std;

void find_element(int arr[],int n,int k,int v)
{
    int sum{};
    for(int i{};i<n;i++)
    {
        sum+=arr[i];
    }
    int y=v*(n+k)-sum;
    int x=y/k;
    if(y>0 && y%k==0)
    {
        cout<<x<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,v;
	    cin>>n>>k>>v;
	    int arr[n];
	    for(int i{};i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    find_element(arr,n,k,v);
	}
	return 0;
}
