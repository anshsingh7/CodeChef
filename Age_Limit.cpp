#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, a;
        cin >> x >> y >> a;
        if (x <= a && a < y)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}