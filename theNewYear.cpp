// https://codeforces.com/problemset/problem/723/A
// A. The New Year: Meeting Friends

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
    int A[3];
    fl(i, 0, 3)
    {
        cin >> A[i];
    }
    sort(A, A + 3);
    cout << A[2] - A[0] << endl;
    return 0;
}