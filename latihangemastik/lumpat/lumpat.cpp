#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, p;
    bool kabur=false;
    bool ketemu = true;
    int cindex = 1000; 
    int dindex = 1000; 
    cin >> t;
    cin>> p;
        cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string a;
        getline(cin, a, '\n');
        if ((i==0||i==t-1)&&(a.length() < p||a.find(" ")<=p)) kabur =true;
        if((a.length()<=2)&&(i!=0||i!=t-1)) kabur =true;
        if (a.find("C") <= p) cindex = i;
        if (a.find("D") <= p) dindex = i;
        if (((i>cindex)&& (i<dindex)) && (a.find(" ")>p)) ketemu = false;
    }
    if (ketemu) cout<<"Dawala bertemu Cepot"<<endl;
    else cout<<"Dawala tidak bertemu Cepot"<<endl;
    if (kabur)cout<<"ada jalan Cepot lumpat"<<endl;
    else cout<<"tidak ada jalan Cepot lumpat"<<endl;

    return 0;
}
