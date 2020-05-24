/*
this solution does not uses flag for checking.
Rather it uses notion of kadane's algorithm for finding solution.
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

int maxOddEven(vi &arr, int n)
{
    int res = 1;
    int curr = 1;
    rep(i,1,n) {
        if((arr[i]%2 == 0) && (arr[i-1]%2 != 0) || (arr[i]%2 != 0) && (arr[i-1]%2 == 0)) {
            curr++;
            res = max(res,curr);
        }
        else
            curr = 1;
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
        cout<<maxOddEven(arr, n)<<endl;
    }
    return 0;
}