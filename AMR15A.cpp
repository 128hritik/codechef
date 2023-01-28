#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a=0;
    int b=0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0)
        {
            a++;
        }
        else{
            b++;
        }
    }
        if(a>b)
        {
            cout<<"READY FOR BATTLE"<<endl;
        }
        else{
            cout<<"NOT READY"<<endl;
        }
    
 
    
	return 0;
}
