/*
Given an array find whether there exists any euilibrium point.
if it exists then print its index otherwise print -1
*/

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

int eqpoint(vi &arr, int n)
{
    int total_sum = 0, left_sum = 0;
    rep(i,0,n) { total_sum += arr[i]; }

    rep(i,0,n) {
        
        // we are subtracting current element so that total_sum can contain suffix sum.
        total_sum -= arr[i];

        if(left_sum == total_sum)
            return i;

        left_sum += arr[i];
    }
    return -1;
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
        cout<<eqpoint(arr, n)<<endl;
    }
    return 0;
}