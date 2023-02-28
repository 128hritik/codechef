#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int a,b,c,d;
       cin>>a>>b>>c;
        d=c/b;
        if(d<a)
        {
            cout<<d<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
   }
    
	return 0;
}
