#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
 
signed main()
{
    int i, flag = 0, ans = INT_MAX;
    vector<int> arr(4);
    for(i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for(i = 0; i < 2; i++)
    {
        if((arr[i] + arr[i + 1])> arr[i + 2])
        {
            flag = 1;
        }
        else if((arr[i] + arr[i + 1]) == arr[i + 2])
        {
            flag = 2;
        }
        else
        {
            flag = 3;
        }
        ans = min(ans, flag);
    }
    if(ans == 1)
    {
        cout << "TRIANGLE";
    }
    else if(ans == 2)
    {
        cout << "SEGMENT";
    }
    else
    {
        cout << "IMPOSSIBLE";
    }
}
