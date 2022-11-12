#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int l, t, endbaris;
bool adapenuh = 0;
int num[20][8];
int check()
{
    adapenuh = 0;
    int a[l];
    for (int i = 0; i < t; i++)
    {
        bool penuh = 1;
        for (int j = 0; j < l; j++)
        {
            if (num[i][j]==0) penuh = 0;
            
        }
        if (penuh)
        {
            endbaris = i;
            for (int j = 0; j < l; j++){
                num[i][j] = 0;
            }
            adapenuh = 1;
        }
    }
}
int drop()
{
    for (int i = endbaris-1; i >= 0; i--)
    {
        for (int j = 0; j < l; j++)
        {
            if (num[i][j] == 1)
            {
                int a = i;
                while (num[a + 1][j]==0 && (a + 1) < t)
                {
                    num[a][j] = 0;
                    num[a + 1][j] = 1;
                    a++;
                }
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    cin >> t >> l;
    for (int i = 0; i < t; i++)
    {
        char a[l];
        for (int j = 0; j < l; j++)
        {
            cin >> a[j];
            num[i][j] = a[j] - '0';
        }
    }
    check();
    while (adapenuh)
    {
        drop();
        check();
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << num[i][j];
        }
        cout << endl;
    }

    return 0;
}
