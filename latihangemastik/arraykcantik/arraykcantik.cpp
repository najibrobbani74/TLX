#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, res = 0;
    cin >> n;
    int a[n];
    set<int> b;
    set<int> index;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b.insert(a[i]);
        index.insert(i);
    }
    sort(a, a + n);
    vector<int> v;
    v.reserve(b.size());
    copy(b.begin(), b.end(), std::back_inserter(v));
    int rata = n % v.size() == 0 ? n / v.size() : n / v.size()+1;
    cout << 0;
    for (int i = 2; i <= n; i++)
    {
        int ubah = 0;
        int alokasi = 0;
        for (int j = 0; j < v.size(); j++)
        {
            int jml = ((upper_bound(a, a + n, v[j]) - a) - (j == 0 ? 0 : (upper_bound(a, a + n, v[j - 1]) - a)));
            alokasi = alokasi + (jml - rata);
            if (jml < i && j>0)ubah+=i-jml;
            // cout<<"rata "  <<jml<<" ";
        }
        cout<<" "<<ubah;
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<a[i]<<endl;
    // }

    return 0;
}
