#include <iostream>
using namespace std;

int main() {
    int tc;cin>>tc;
    while(tc--){
        int n,x,p;
        cin>>n>>x>>p;
        int total_mark=(x*3)-(n-x);
        // cout<<total_mark<<endl;
        if(total_mark>=p){
            cout<<"PASS"<<endl;
        }else{
            cout<<"FAIL"<<endl;
        }
    }
	return 0;
}