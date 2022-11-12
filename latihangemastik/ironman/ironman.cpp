#include <bits/stdc++.h>
using namespace std;
struct titik
{
    int x;
    int y;
};
bool cekPotong(titik ironman, titik ul, titik obs1, titik obs2)
{
    double d = (((ironman.y - ul.y) * (obs1.x - obs2.x)) - ((obs1.y - obs2.y) * (ironman.x - ul.x)));
    if (d == 0)
        return false;

    double t = (((ironman.y-obs1.y)*(obs1.x - obs2.x))-((obs1.y-obs2.y)*(ironman.x-obs1.x)))/d;
    double u = (((ironman.y-obs1.y)*(ironman.x - ul.x))-((ironman.y-ul.y)*(ironman.x-obs1.x)))/d;
    if ((t>=0 && t<=1)&&(u>=0 && u<=1)) return true;
    return false;
    
}
int main(int argc, char const *argv[])
{
    titik ironman;
    cin >> ironman.x >> ironman.y;
    int n;
    cin >> n;
    titik ul[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ul[i].x >> ul[i].y;
    }
    int nobs;
    cin >> nobs;
    titik obs[nobs][2];
    for (int i = 0; i < nobs; i++)
    {
        cin >> obs[i][0].x >> obs[i][0].y >> obs[i][1].x >> obs[i][1].y;
    }
    int jml = 0;
    for (int i = 0; i < n; i++)
    {
        int y = 1;
        for (int j = 0; j < nobs; j++)
        {
            if (cekPotong(ironman, ul[i], obs[j][0], obs[j][1]))
            {
                y = 0;
                break;
            }
        }
        jml += y;
    }
    cout<<jml<<endl;

    return 0;
}
