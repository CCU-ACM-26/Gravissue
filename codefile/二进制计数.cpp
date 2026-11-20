#include <iostream>
using namespace std;
int main()
{
    unsigned long long x;
    cin >> x;
    cout << __builtin_popcountll(x) << endl;
    return 0;
}