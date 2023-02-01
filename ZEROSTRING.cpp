#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       string s;
       cin>>s;
       int z=0,one=0;
       for(int i=0; i<s.size(); i++){
           if(s[i]=='0')
           z++;
           else
           one++;
           
       }
       if(z<one)
       {
           cout<<z+1<<endl;
       }
       else{
           cout<<one<<endl;
       }
   }
    
	return 0;
}
