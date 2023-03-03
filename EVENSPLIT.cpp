#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n == 2){
            cout << s << '\n';
        } else{
            sort(s.begin(),s.end());
            cout << s << '\n';
        }
    }
    return 0;
}