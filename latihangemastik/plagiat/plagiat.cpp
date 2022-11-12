#include <bits/stdc++.h>
using namespace std;

int fmax(int l[],int n){
    int max = l[0];
    for (int i = 0; i < n; i++)
    {
        if (l[i]>max)
        {
            max = l[i];
        }
    }
    return max;
}
int fmin(int l[],int n){
    int min = l[0];
    for (int i = 0; i < n; i++)
    {
        if (l[i]<min)
        {
            min = l[i];
        }
    }
    return min;
    
}


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, m;
    cin >> n >> m;
    int s[n][m];
    int t[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> t[i][j];
        }
    }
    int maxx = abs(s[1][0]-s[0][0])+abs(t[0][0]-t[1][0])+1;
    int l[4][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            l[0][j] = s[j][i] + t[j][i] + j;
            l[1][j] = s[j][i] - t[j][i] - j;
            l[2][j] = s[j][i] + t[j][i] - j;
            l[3][j] = s[j][i] - t[j][i] + j;
        }

        for (int j = 0; j < 4; j++)
        {
            maxx = max(maxx,fmax(l[j],n)-fmin(l[j],n));
        }
        
        
    }
    cout<<maxx<<endl;
    return 0;
}
