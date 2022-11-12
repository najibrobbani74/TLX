#include <bits/stdc++.h>
using namespace std;

void show(int x)
{
    std::stringstream ss;
    ss << std::setw(5) << std::setfill('0') << x;
    std::string s = ss.str();
    cout<<s<<endl;
}

int main(int argc, char const *argv[])
{
    int n, m, ans[2], min = INT_MAX;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (abs(a[i] - m) < min)
        {
            min = abs(a[i] - m);
            ans[0] = a[i];
            ans[1] = 0;
        }
        else if (abs(a[i] - m) == min)
        {
            ans[1] = a[i];
        }
    }

    if (ans[1] == 0)
    {
        show(ans[0]);
    } else {
        int y = max(ans[0],ans[1]);
        int x = std::min(ans[1],ans[0]);
        show(x);
        show(y);
    }

    return 0;
}
