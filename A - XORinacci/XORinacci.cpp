#include<bits/stdc++.h>
using namespace std;
 
//#define ll long long
//#define int ll
 
signed main()
{
    int test, a, b, n;
    cin >> test;
    while(test--)
    {
        cin >> a >> b >> n;
        int dp[3];
        dp[0] = a, dp[1] = b;
        dp[2] = dp[0] ^ dp[1];
        cout << dp[n % 3] << endl;
    }
}
