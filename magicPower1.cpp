// https://codeforces.com/contest/670/problem/D1
// D1. Magic Powder - 1

#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
//#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define fl(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

signed main()
{
    int n, k;
    cin >> n >> k;
    int r[n], a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }

    int low = 0, high = 2001;
    while (low <= high)
    {
        int cost = 0, f = 0;
        int mid = (low + high) / 2;
        fl(i, 0, n)
        {
            cost += max(r[i] * mid - a[i], f);
        }
        if (cost <= k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << high << endl;

    return 0;
}