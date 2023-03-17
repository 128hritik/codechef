#include <iostream>
using namespace std;

int main() {
	int t,x,y,a,b;

	cin >>t;
	while(t--){
	    cin >>x>>y>>a>>b;
	    	int i=0;
	    if(x!=a && x!=b ){
	         i++;
	     }
	     if(y!=a && y!=b ){
	         i++;
	     }
	     cout << i <<endl;
	}
	return 0;
}
