// https://codeforces.com/problemset/problem/263/A
//  A. Beautiful Matrix

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
    int mat[6][6];
    int r, c;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1)
            {
                r = abs(3 - i);
                c = abs(3 - j);
                cout << r + c << endl;
                goto here;
            }
        }
    }
    here:
    return 0;
}