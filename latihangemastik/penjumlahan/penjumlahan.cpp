#include <string>
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mtrx[a][b];
    int ttk[c][4];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin>>mtrx[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << mtrx[a][b];
        }
    }

    // for (int i = 0; i < c; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> ttk[i][j];
    //     }
    // }

    // for (int i = 0; i < c; i++)
    // {
    //     int jml = 0;
    //     // int m = (ttk[i][2] - ttk[i][0] + 1) * (ttk[i][3] - ttk[i][1] + 1);
    //     int row = ttk[i][2] - ttk[i][0] + 1;
    //     for (int j = 0; j < row; j++)
    //     {
    //         int tx = ttk[i][0] + j;
    //         int ty = ttk[i][1];
    //         int col = (ttk[i][3] - ttk[i][1] + 1);
    //         for (int k = 0; k < col; k++)
    //         {
    //             cout << mtrx[tx][ty + k] << " ";
    //         }
    //     }
    //     // cout << jml << " ";
    // }
}