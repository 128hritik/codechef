/*#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int count;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+; j<n; j++)
            {
                if(arr[j]==arr[i]){
                    arr[j]=0;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=0)
            {
                ans++;
            }
        }
        
        cout<<ans<<endl;
    }
   
    
	return 0;
}*/

# include <bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while(T--){
      int n,ans=0;
      cin>>n;
      int d[n];
      for(int i=0; i<n; i++){
        cin>>d[i];
      }
      for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
          if(d[j]==d[i]){
            d[j]=0;
          }
        }
      }
      for(int i=0; i<n; i++){
        if(d[i]!=0){
          ans++;
        }
      }
      cout<<ans<<'\n';
  }

return 0;
}