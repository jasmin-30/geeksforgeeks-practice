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

int maxSum(vi &arr, int n, int k)
{
    int curr_sum = 0;
    rep(i,0,k) {
        curr_sum += arr[i];
    }

    int max_sum = curr_sum;
    rep(i,k,n) {
        curr_sum += (arr[i] - arr[i-k]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
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
        int n, k;
        cin>>n>>k;
        vi arr(n);
        rep(i,0,n) { cin>>arr[i]; }
        cout<<maxSum(arr, n, k)<<endl;
    }
    return 0;
}