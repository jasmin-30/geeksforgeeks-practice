/*
Given an array find maximum arr[j]-arr[i] such that j>i
*/


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

int maxDiff(vi &arr, int n)
{
    int res = arr[1] - arr[0];
    int minVal = arr[0];
    rep(j,1,n) {
        res = max(res, arr[j] - minVal);
        minVal = min(minVal, arr[j]);
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
        cout<<maxDiff(arr, n)<<endl;
    }
    return 0;
}