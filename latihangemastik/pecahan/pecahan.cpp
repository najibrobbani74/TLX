#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    if ((a/b)>(c/d)) cout<<"lebih besar"<<endl;
    else if ((a/b)<(c/d)) cout<<"lebih kecil"<<endl;
    else if ((a/b)==(c/d)) cout<<"sama"<<endl;
    
    return 0;
}
