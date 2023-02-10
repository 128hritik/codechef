#include <iostream>
using namespace std;

int main() {
   	int r;cin>>r;
	while(r--){
	    int n;cin>>n;
	    string s;
	    cin>>s;
	    char c[n];
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='H' || s[i]=='T'){
	            c[count]=s[i];
	            count++;
	        }
	    }
	    int flag=0;
	    if(count%2!=0){
	        cout<<"Invalid"<<endl;
	    }
	    else{
    	    for(int i=0;i<count;i=i+2){
    	        if(c[i]=='H' && c[i+1]!='T'){
    	            flag=1;
    	        }
    	        else if(c[i]=='T'){
    	            flag=1;
    	        }
    	        else if(c[i+1]=='H'){
    	            flag=1;
    	        }
    	    }
    	    if(flag==1){
    	        cout<<"Invalid"<<endl;
    	    }
    	    else{
    	        cout<<"Valid"<<endl;
    	    }
	    }
	}
    
	return 0;
}
