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

void leftrotate(vi &arr, int n, int d)
{
    if(d == n)
        return;

    reverse(arr.begin(), (arr.begin()+(d-1)));
    reverse((arr.begin()+d), arr.end());
    reverse(arr.begin(), arr.end());
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
        int n,d;
        cin>>n>>d;
        vi arr(n);
        rep(i,0,n) { cin>>arr[i]; }
        leftrotate(arr, n, d);
        rep(i,0,n) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
Time Complexity : O(n)
Auxiliary Space : O(1)
*/