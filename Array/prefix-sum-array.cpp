/*
Given a fixed size array and k queries.
each query takes two param L and R.
L represents starting index and R represents ending index.

you need to answer every query.
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

int getSum(const vi &prefix_sum, int l, int r)
{
    if(l==0)
        return prefix_sum[r];
    else
        return (prefix_sum[r] - prefix_sum[l-1]);
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
        int n,k;
        cin>>n>>k;
        vi arr(n);
        rep(i,0,n) { cin>>arr[i]; }

        //Precomputing prefix sum array.
        vi prefix_sum(n);
        prefix_sum[0] = arr[0];
        rep(i,1,n) {
            prefix_sum[i] = prefix_sum[i-1] + arr[i];
        }

        //loop for queries
        rep(i,0,k) {
            int l,r;
            cin>>l>>r;
            cout<<getSum(prefix_sum, l, r)<<endl;
        }
    }
    return 0;
}