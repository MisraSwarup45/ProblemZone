// https://codeforces.com/contest/514/problem/A
//  A. Chewbaсca and Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int len = str.size();
    int first = str[0] - '0';
    if (first == 9)
    {
        str[0] = '9';
    }
    else
    {
        if (first > 4)
        {
            str[0] = ((9 - first) + '0');
        }
    }
    for (int i = 1; i < len; i++)
    {
        int x = str[i] - '0';
        if (x < 5 || x == 0)
        {
            continue;
        }
        else
        {
            str[i] = ((9 - x) + '0');
        }
    }
    cout << str << endl;
    return 0;
}