#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define M 1000000007
#define rep(i, begin, end) for (__typeof(end) i = (begin); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;

void leaders(vi &arr, int n)
{
    vi tmp;
    tmp.pb(arr[n-1]);
    
    rep(i,n-2,0) {
        if(arr[i] > tmp.back()) {
            tmp.pb(arr[i]);
        }
    }

    for(auto i=tmp.rbegin(); i!=tmp.rend(); ++i) {
        cout<<*i<<" ";
    }
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
        rep(i,0,n) {
            cin>>arr[i];
        }
        leaders(arr, n);
        cout<<endl;
    }
    return 0;
}