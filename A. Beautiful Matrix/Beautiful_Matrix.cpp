#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
 
signed main()
{
	int i, j, loc_i, loc_j;
	vector<vector<int>> arr(5, vector<int> (5));
	for(i = 0; i < 5; i++)
	{
	    for(j = 0; j < 5; j++)
	    {
	        int num = arr[i][j];
	        cin >> num;
	        if(num == 1)
	        {
	            loc_i = i + 1;
	            loc_j = j + 1;
	        }
	    }
	}
	int ans = abs(3 - loc_i) + abs(3 - loc_j);
	cout << ans;
}
