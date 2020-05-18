#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int firstSetbit(int n)
{
    int pos = 1;
    if(n==0)
        return 0;
    while((n&1) != 1) {
        n >>= 1;
        ++pos;
    }
    return pos;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        cout<<firstSetbit(n)<<endl;
    }
    return 0;
}