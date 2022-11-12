#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, p, l, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> l >> m;
        for (int i = 0; i < m; i++)
        {
            if (p == 0 && l == 0)
            {
                break;
            }
            if (p > l)
            {
                p = p / 2;
                continue;
            }
            else
            {
                l = l / 2;
                continue;
            }
            ;
        }
        if (p>l)cout<<p<<" "<<l<<endl;
        else cout<<l<<" "<<p<<endl;
        
    }

    return 0;
}
