#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int tc, pc, wc, higher;
    string pa;
    cin >> tc;
    for (size_t j = 0; j < tc; j++)
    {
        cin >> pc >> wc >> pa;
        int human[pc][4];
        int winner[pc];
        string names[pc];
        for (size_t i = 0; i < pc; i++)
        {
            cin >> names[i] >> human[i][0] >> human[i][1] >> human[i][2];
        }
        int indpa = find(names,names+pc,pa)-names;
        int menang = 0;
        for (size_t i = 0; i < pc; i++)
        {
            if (indpa == i) continue;
            if(human[indpa][2]>human[i][2]) menang++;
            else if(human[indpa][2]==human[i][2]){
                if(human[indpa][1]>human[i][1]) menang++;
                else if(human[indpa][1]==human[i][1]){
                    if(human[indpa][0]>human[i][0]) menang++;
                }
            }
        }

        if (pc-menang<=wc) cout<<"YA"<<endl;
        else cout<<"TIDAK"<<endl;
    }

    return 0;
}
