#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       int e=(max(abs(a-c),abs(b-d)));
       cout<<e<<endl;
   }
    
	return 0;
}
