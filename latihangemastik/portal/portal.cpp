#include <bits/stdc++.h>
using namespace std;
long long n, k,portal=1,par[10001],h[10001],ans = 0;
priority_queue<long long> pq;

int findParent(int x){
    // cout<<par[1]<<par[2]<<par[3]<<par[4]<<par[5]<<par[6]<<endl;
    while (par[x] != x){
        x = par[x];
    }
    // cout<<par[1]<<par[2]<<par[3]<<par[4]<<par[5]<<par[6]endl;
    return x;
}

void merge(int a, int b){
    // cout<<"parent "<<a<<" "<<b<<endl;
    a = findParent(a);
    b = findParent(b);
    // cout<<"parent "<<a<<" "<<b<<endl;
    if(a == b) return;
    par[b] = a;
    h[a]+= b;
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n>>k;
    for (int i = 1; i <= n; i++)
    {
        par[i]= i;
        cin>>h[i];
    }
    for (int i = 1; i <= k; i++)
    {
        int a,b;
        cin>>a>>b;
    // cout<<h[1]<<h[2]<<h[3]<<h[4]<<h[5]<<h[6]<<endl;
        merge(a,b);
    // cout<<h[1]<<h[2]<<h[3]<<h[4]<<h[5]<<h[6]<<endl;
    }
    for (int i = 1; i <= n; i++)
    {
        if (par[i]==i)
        {
            pq.push(h[i]);
        }
    }
    while(!pq.empty()){
        ans += (pq.top()*portal);
        portal++;
        pq.pop();
    }
    cout<<ans<<endl;
    
    
    



    return 0;
}
