
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    int hash[10]={0};
	    for(int i=0;i<n;i++)
	    {
	        cin>>s;
	        for(int j=0;j<10;j++)
	        {
	            if(s[j]=='1')
	            {
	                if(hash[j]==0)
	                {
	                    hash[j]=1;
	                }
	                else
	                    hash[j]=0;
	            }
	        }
	    }
	    for(int i=1;i<10;i++)
	    {
	        hash[i]+=hash[i-1];
	    }
        cout<<hash[9]<<endl;
	    
	}
	return 0;
}
