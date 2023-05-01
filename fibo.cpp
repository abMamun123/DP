/**
 *author:Abu Jafar Shiddik
 *created:19-04-2023(15:51:32)
 **/
#include <bits/stdc++.h>
using namespace std;
long long arr[101];
long long fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    if (arr[n] != 0)
    {
        return arr[n];
    }
    arr[n] = fibo(n - 1) + fibo(n - 2) + fibo(n - 3);
    return arr[n];
}
int main()
{
    int n;
    cin >> n;
    cout << (fibo(n)) << "\n";
    return 0;
}