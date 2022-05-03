// https://codeforces.com/problemset/problem/151/A
//  A. Soft Drinking

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
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrinks = k * l;
    totalDrinks = totalDrinks / nl;
    int totalSlices = c * d;
    int totalSalt = p / np;
    int maxDrinks = min(totalDrinks, min(totalSalt, totalSlices))/n;
    cout << maxDrinks << endl;
    return 0;
}