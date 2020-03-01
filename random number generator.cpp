//random number generator
#include<bits/stdc++.h>
using namespace std;
typedef int ll;
mt19937_64 rd;
int main()
{
    uniform_int_distribution<int> rng(1, 10);
    ll t=10;
    while(t)
    {
        t--;
        cout<<rng(rd)<<endl;
    }
}
