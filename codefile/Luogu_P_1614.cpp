#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> nub(n);
    for (int i = 0; i < n; i++)
        cin >> nub[i];

    int temp = 0;
    for (int i = 0; i < m; i++)
        temp += nub[i];
    int sum = temp;

    for (int i = m; i < n; ++i)
    {
        temp += nub[i] - nub[i - m];
        sum = min(sum, temp);
    }
    cout << sum;
    return 0;
}