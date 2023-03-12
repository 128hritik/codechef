
#include <iostream>
using namespace std;
#include<vector>
#include<string>
int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n!=0){
        int l,res=0;
        string s;
        cin>>l>>s;
	    int len=s.length();
        if(s[len-1]=='0'){
            res+=1;
        }
        if(s[0]=='1'){
            res+=1;
        }
        for(int i=0;i<len-1;i++){
            if(s[i]=='0' && s[i+1]=='1'){
                res+=1;
            }
        }
        cout<<res<<endl;
        n--;
	}
	return 0;
}
