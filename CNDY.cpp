#include <iostream>
using namespace std;

int main() {
	
	int t,cnt=0;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int arr[n*2];
	    for(int i=0;i<(n*2);i++){
	        cin >>arr[i];
	    }
	    for(int i=0;i<(n*2)-1;i++){
	        cnt=0;
	  
	        for(int j=i;j<n*2;j++){
	          if(arr[i]==arr[j]){
	              cnt++;
	          }
	        }
	        if(cnt==3){
	            cout <<"No\n";
	            break;
	        }
	    } 
	    if(cnt<3){
	        cout <<"Yes\n";
	    }
	}
	return 0;
}