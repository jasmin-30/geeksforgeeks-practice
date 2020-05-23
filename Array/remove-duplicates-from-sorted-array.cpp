#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define M 1000000007
#define rep(i, begin, end) for (__typeof(end) i = (begin); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;

int remDup(vi &arr, int n)
{
    int res = 1;
    rep(i,1,n) {
        if(arr[i] != arr[res-1]) {
            arr[res] = arr[i];
            res++;
        }
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
        rep(i,0,n) {
            cin>>arr[i];
        }
        int new_size = remDup(arr, n);
        rep(i,0,new_size) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}