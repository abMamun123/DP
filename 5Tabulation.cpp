#include <bits/stdc++.h>
using namespace std;

int min_operations(int n) {
    vector<int> dp(n+1, 0);
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0 && i % 3 == 0) {
            dp[i] = min({dp[i/2], dp[i/3], dp[i-1]}) + 1;
        } else if (i % 2 == 0) {
            dp[i] = min(dp[i/2], dp[i-1]) + 1;
        } else if (i % 3 == 0) {
            dp[i] = min(dp[i/3], dp[i-1]) + 1;
        } else {
            dp[i] = dp[i-1] + 1;
        }
    }
    return dp[n];
}

int main() {
    int n;
    cin>>n;
    cout << min_operations(n) << endl; 
    return 0;
}
