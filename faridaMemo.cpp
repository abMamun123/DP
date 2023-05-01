
#include <bits/stdc++.h>
using namespace std;

long long int memo[10001];

long long int maxSum(const vector<long long int>& a, int i)
{
    if (i < 0) {
        return 0;
    }
    if (memo[i] != -1) {
        return memo[i];
    }
    long long int sum = max(maxSum(a, i - 1), a[i] + maxSum(a, i - 2));
    memo[i] = sum;
    return sum;
}

int main()
{
    int t, j;
    cin >> t;

    for (j = 0; j < t; j++)
    {
        int n, i;
        vector<long long int> a(10001);
        cin >> n;

        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n; i++)
            memo[i] = -1;

        long long int result = maxSum(a, n - 1);

        cout << "Case " << j + 1 << ": " << result << endl;
    }

    return 0;
}
