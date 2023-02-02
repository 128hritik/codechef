#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int a,b,c;
       cin>>a>>b>>c;
      int t=c/b;
      int r=c%b;
      if(t<a)
      {
          cout<<t*b*b+r*r<<endl;
      }
      else
      {
          cout<<a*b*b<<endl;
      }
    
    }
    return 0;
}
