#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);//this will make your code fast
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    double sum=0;
	    for(int i=k;i<n-k;i++){
	        sum+=arr[i];
	    }
	    double avg=sum/(n-2*k);
	    cout<<fixed<<setprecision(6)<<avg<<endl;
	}
	    return 0;
}