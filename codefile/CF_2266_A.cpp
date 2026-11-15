#include <iostream>

using namespace std;
typedef long long LL;

int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--)
    {
        int n, a1, a2, a3;
        cin >> n >> a1 >> a2 >> a3;
        if (a3 < a2)
        {
            a2 = a3;
        }
        if (a2 < a1)
        {
            a1 = a2;
        }
        cout << n - a1 << "\n";
    };
    return 0;
}