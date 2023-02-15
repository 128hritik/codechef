#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d=0;
        if(b>c){
            b-=c;
            d=b;
        }
        else
        {
            c-=b;
            d=c;
        }
        if(a>d)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
   
    
	return 0;
}
