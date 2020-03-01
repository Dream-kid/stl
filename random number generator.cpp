//random number generator
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
mt19937_64 rd;
int main()
{
    uniform_int_distribution<ll> temp(1, 10);
    ll t=10;
    while(t)
    {
        t--;
        cout<<temp(rd)<<endl;
    }
}
