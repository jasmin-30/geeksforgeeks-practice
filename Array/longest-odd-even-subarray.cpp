/*
find length of longest subarray that has alternating even odd elements.
*/

/*
Below solution uses the flags to check whether the previous element was of same type or not.
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
    bool odd = false, even = false;
    if(arr[0] & 1) {
        odd = true;
        even = false;
    }
    else {
        even = true;
        odd = false;
    }
    rep(i,1,n) {
        if(arr[i] & 1) {
            if((even == true) && (odd == false)) {
                curr += 1;
                odd = true;
                even = false;
            }
            else {
                curr = 1;
                odd = true;
                even = false;
            }
            res = max(res, curr);
        }
        else {
            if((odd == true) && (even == false)) {
                curr += 1;
                odd = false;
                even = true;
            }
            else {
                curr = 1;
                odd = false;
                even = true;
            }
            res = max(res, curr);
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
        rep(i,0,n) { cin>>arr[i]; }
        cout<<maxOddEven(arr, n)<<endl;
    }
    return 0;
}