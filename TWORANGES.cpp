#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int a,b,c,d;
       int x=0;
       cin>>a>>b>>c>>d;
       int lb=max(a,c);
       int ub=min(b,d);
       if(lb>ub)
       {
           x=(b-a+1)+(d-c+1);
       }
       else{
           x=(b-a+1)+(d-c+1)-(ub-lb+1);
       }
       cout<<x<<endl;
   }
    
	return 0;
}
