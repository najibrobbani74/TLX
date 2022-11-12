#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x = 0, y = 0, n, i = 1;
    cin >> n;
    while (n > 0)
    {
        if (n - i < 0)
        {
            if (i % 4 == 1)
                x = x + n;
            else if (i % 4 == 2)
                y = y + n;
            else if (i % 4 == 3)
                x = x - n;
            else if (i % 4 == 0)
                y = y - n;
        // cout << "x = " << x << " y = " << y << endl;
        // cout<<"i = "<<i<<" n = "<<n<<endl;
            break;
        }

        if (i % 4 == 1)
            x = x + i;
        else if (i % 4 == 2)
            y = y + i;
        else if (i % 4 == 3)
            x = x - i;
        else if (i % 4 == 0)
            y = y - i;

        n = n - i;
        i++;
    }
    cout<<x<<" "<<y<<endl;
}

int main(int argc, char const *argv[])
{
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();

    return 0;
}
