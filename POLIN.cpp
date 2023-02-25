#include <iostream>
using namespace std;
#include<set>
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int num,x,y;
	    cin>>num;
	    set<int>s1;
	    set<int>s2;
	    for(int i=0;i<num;i++){
	        cin>>x>>y;
	        s1.insert(x);
	        s2.insert(y);
	    }
	    cout<<s1.size()+s2.size()<<endl;
	}
	return 0;
}