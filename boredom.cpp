#include <bits/stdc++.h>
using namespace std;
int dp[1005];
int boredom(int i)
{
    if (i == 0)
        return 0;
    if (i == 1)
        return dp[1];
    return max(boredom(i - 1), boredom(i - 2) + i * dp[i]);
}
int main()
{
    long long a, b, m = 0;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
       cin>>b;
       dp[b]++;
       m = max(m,b);
    }
    cout<<boredom(m);
    return 0;
}