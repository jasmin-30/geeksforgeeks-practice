/*
Given a number N, let the reverse of the number be R. 
The task is to print the output of the Expression power(N,R), where pow function represents N raised to power R.
Note: As answers can be very large, print the result modulo 10^9 + 7.
*/

#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

ll rev(ll n)
{
    ll res = 0;
    while(n>0) {
        res = (res*10) + (n%10);
        n /= 10;
    }
    return res;
}

// ll power(ll n, ll r)
// {
//     if(r==0)
//         return 1;
    
//     ll tmp = (ll)power(n, (r/2));

//     if(r%2 == 1)
//         return (ll)((ll)(n % M) * (ll)(tmp % M) * (ll)(tmp % M)) % M;
//     else
//         return (ll)((ll)(tmp % M) * (ll)(tmp % M)) % M;
// }


ll power(ll n, ll r)
{
    n %= M;
    ll res = 1;
    while(r > 0) {
        if(r & 1)
            res = (res * n) % M;
        
        n = (n * n) % M;
        r >>= 1;
    }
    return res;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        ll r = rev(n);
        ll ans = power(n,r);
        cout<<ans<<endl;
    }
    return 0;
}