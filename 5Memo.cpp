#include <bits/stdc++.h>
using namespace std;
int min_operations(int n,vector<int> &memo) {
    
    if (n == 1) {
        return 0;
    }
    if (memo[n] != 0) {
        return memo[n];
    }
    int res;
    if (n % 2 == 0 && n % 3 == 0) {
        res = min({min_operations(n/2, memo), min_operations(n/3, memo), min_operations(n-1, memo)}) + 1;
    } else if (n % 2 == 0) {
        res = min(min_operations(n/2, memo), min_operations(n-1, memo)) + 1;
    } else if (n % 3 == 0) {
        res = min(min_operations(n/3, memo), min_operations(n-1, memo)) + 1;
    } else {
        res = min_operations(n-1, memo) + 1;
    }
    memo[n] = res;
    return res;
}

int main() {
    int n;
    cin>>n;
    vector<int> memo(n+1, 0);
    cout << min_operations(n,memo) << endl; 
    return 0;
}
