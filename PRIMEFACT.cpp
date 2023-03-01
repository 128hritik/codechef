#include <iostream>
using namespace std;

int small(int n)
{
    if(n%2==0)
    return 2;
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0)
        return i;
    }
    return n;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x=small(a);
        a=a+x;
        cout<<1+((b-a+1)/2)<<endl;
    }

	return 0;
}
