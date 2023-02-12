#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i=1;
        while(i<=n)
        {
        if(i==n)
        cout<<"1";
            else
            
                cout<<i+1<<" ";
                i++;
            
            
        }
        cout<<endl;
    }
    return 0;
}