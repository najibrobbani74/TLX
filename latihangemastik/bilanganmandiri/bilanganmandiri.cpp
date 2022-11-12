#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        int num = b;
        int tambah =0,kurang =0;
        int prima[] = {2, 3, 5, 7, 11,
                          13,
                          17,
                          19,
                          23,
                          29,
                          31,
                          37,
                          41,
                          43,
                          47,
                          53,
                          59,
                          61,
                          67,
                          71,
                          73,
                          79,
                          83,
                          89,
                          97,
                          101,
                          103,
                          107,
                          109,
                          113,
                          127};
        for (int i = 0; prima[i] <= a; i++)
        {
            kurang = (b / prima[i]);
            int b = i;
            while (b--) kurang = kurang - (kurang/prima[b]);
            cout<<kurang<<endl;
            // tambah = i>0?tambah + ((b / prima[i])/prima[i-1]):tambah+0;
            // num += tambah;
        }
        cout << num-1 << endl;
    }

    return 0;
}
