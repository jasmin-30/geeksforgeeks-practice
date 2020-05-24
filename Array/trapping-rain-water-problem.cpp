#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define vc vector<char>
#define vs vector<string>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define M 1000000007
#define rep(i, begin, end) for (__typeof(end) i = (begin); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;

int maxCapacity(vi &arr, int n)
{
    int res = 0;
    vi lmax(n), rmax(n);

    lmax[0] = arr[0];
    rep(i,1,n) {
        lmax[i] = max(lmax[i-1], arr[i]);
    }

    rmax[n-1] = arr[n-1];
    rep(i,n-2,0) {
        rmax[i] = max(rmax[i+1], arr[i]);
    }

    rep(i,0,n) {
        res += min(lmax[i], rmax[i]) - arr[i];
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
        int n;
        cin>>n;
        vi arr(n);
        rep(i,0,n) { cin>>arr[i]; }
        cout<<maxCapacity(arr, n)<<endl;
    }
    return 0;
}