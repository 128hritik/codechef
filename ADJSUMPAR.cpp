#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],sumation=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sumation+=a[i];
	        
	    }
	    
	    if(sumation%2==0)
	    {
	        cout<<"Yes"<<endl;
	    }
	    
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}