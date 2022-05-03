// https://codeforces.com/problemset/problem/1352/A
// A. Sum of Round Numbers

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
    int t;
    int ans[100000];
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int n;
        int rem = 0, k = 0;
        cin >> n;
        if (n >= 1000)
        {
            rem = n % 1000;
            ans[k++] = n - rem;
            n %= 1000;
        }
        if (n >= 100)
        {
            rem = n % 100;
            ans[k++] = n - rem;
            n %= 100;
        }
        if (n >= 10)
        {
            rem = n % 10;
            ans[k++] = n - rem;
            n %= 10;
        }
        if (n > 0 && n < 10)
        {
            ans[k++] = n;
        }
        fl(i,0,k){
            v.push_back(ans[i]);
        }
        cout<<v.size()<<endl;
        fl(i,0,v.size()){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}