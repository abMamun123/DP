#include <bits/stdc++.h>
using namespace std;
long long fibo(int n)
{
    long long f[n+1];
    f[0] = 0; 
    f[1] = 1;
    f[2] = 1;
    for(int i=3; i<=n; i++)
    {
        f[i] = f[i-1] + f[i-2]+ f[i-3];
    }
    return f[n];
}

int main()
{
    int n;
    cin>>n;
    cout << (fibo(n)) << "\n";
    return 0;
}
