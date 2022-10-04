#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        (a < 7) ? cout << "YES"<<endl : cout << "NO" << endl;
    }

    return 0;
}
        // if (a < 7)
        // {
        //     cout << "YES";
        // }
        // else
        // {
        //     cout << "NO";
        // }