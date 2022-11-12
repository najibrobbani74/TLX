#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,min,max,res = 0;
    cin >> n;
    int p[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    p[n]=0;
    for (int i = 0; i < n;)
    {   
        if(p[i]>=p[i+1]){
            i++;
            continue;
        } else {
            min = p[i];
            for (int j = i+1; j < n; j++)
            {
                if(p[j]<=p[j+1]){
                    continue;
                } else {
                    max = p[j];
                    res = res + (max-min);
                    i = j+1;
                    break;
                }
            }
            
        }
    }
    cout << res<<endl;

    return 0;
}
