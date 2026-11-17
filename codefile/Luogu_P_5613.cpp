#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<bool> special(n + 2, false);
    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        special[a] = true;
    }

    int now = 0;
    int step = 0;
    while (now < n)
    {
        now += m;
        ++step;
        if (special[now])
        {
            ++m;
        }
    }

    cout << step << "\n";
    return 0;
}
